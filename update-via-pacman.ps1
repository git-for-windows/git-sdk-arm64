# This script updates a Git for Windows SDK via Pacman.
#
# Its primary use is to update the `git-sdk-arm64` repository at
# https://github.com/git-for-windows/git-sdk-arm64, via its `sync`
# workflow.
#
# It can also be run locally. By default, PowerShell does not allow to run
# scripts. This can be temporarily allowed via
#
# Set-ExecutionPolicy -ExecutionPolicy Bypass -Scope Process

function die {
  Param(
    [Parameter(Mandatory=$true,Position=0)] [String]$Message
  )
  [Console]::Error.WriteLine($Message)
  exit 1
}

# switch to the directory containing this script
Set-Location $PSScriptRoot
if (!$?) { die "Could not switch directory to $PSScriptRoot" }

$env:PATH = "$(Get-Location)\usr\bin;" + $env:PATH

# Set to MSYS mode
$env:MSYSTEM = "MSYS"
$env:MSYS2_PATH_TYPE = "minimal"

# Create /var/log/ so that pacman.log is written
New-Item -ItemType Directory -Path var\log -Force

echo "Run Pacman (First Pass)"
bash -lc "pacman -Syyu --overwrite=\* --noconfirm"
if (!$?) { exit 1 }

# If Pacman updated "core" packages, e.g. the MSYS2 runtime, it stops
# (because Pacman itself depends on the MSYS2 runtime, and continuing would
# result in crashes or hangs). In such a case, we simply need to upgrade
# *again*.
#
# To detect that, we look at Pacman's log and search for the needle
#
# 	[PACMAN] starting <upgrade-type> system upgrade
#
# If the last such line has the upgrade type `full`, we're fine, and do not
# need to run Pacman again. Otherwise we will have to run it again, letting
# it upgrade the non-core packages.

$type=(
  Get-Content -Tail 512 var\log\pacman.log |
  Select-String -AllMatches -Pattern "\[PACMAN\] starting .* system upgrade" |
  Select -Last 1
)
if ($type -Match "full system upgrade") {
  echo "No second pass needed"
} else {
  echo "Run Pacman again (Second Pass) to upgrade the remaining (non-core) packages"
  bash -lc "pacman -Su --overwrite=\* --noconfirm"
  if (!$?) { exit 1 }
}

# Wrapping up: re-install git-extra
bash -lc "pacman -S --overwrite=\* --noconfirm git-extra"
