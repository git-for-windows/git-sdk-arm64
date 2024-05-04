# This script tries to help with the frequent `pacman.exe` hangs on
# Windows/ARM64
#
# NOTE! This is just a _work-around_, no proper solution. The hope is still
# that we will eventually figure out what is going wrong in the MSYS2 runtime
# and fix it properly.
#
# The symptom is that there are processes whose `CommandLine` is identical to
# their parent process, hanging around waiting for something that is not
# happening. The working theory is that they are waiting for some child process
# that is long gone. Blocking their parent process while doing so.
#
# This script works around that by polling the list of current processes,
# finding `pacman` processes whose `CommandLine` is identical to their
# respective parent process'. Once such a child process is found, this script
# waits a little to see whether the child process consumes a non-negligible
# amount of CPU time, and if it has been idle for half a minute, terminates it.

# Set-PSDebug -Trace 1
Set-PSDebug -Off

function die {
  Param(
    [Parameter(Mandatory=$true,Position=0)] [String]$Message
  )
  [Console]::Error.WriteLine($Message)
  exit 1
}

function getHangingPacmanProcess {
  # Get all Pacman processes with a `CommandLine` that is identical to their
  # respective parent process; This would most likely be those signal handler
  # processes spawned by the Cygwin/MSYS2 runtime to handle signals for child
  # processes.
  $p = (Get-CimInstance Win32_Process |
    Where-Object {$_.CommandLine -like '*pacman*'} |
    Select-Object CommandLine, ParentProcessId, ProcessId, CPU |
    Group-Object CommandLine |
    Where-Object {$_.Count -gt 1} |
    Select-Object -ExpandProperty Group)
  if ($p.Length -eq 2 -and $p[0].processId -eq $p[1].parentProcessId) {
    # Ignore it if it has child processes
    $childProcesses = (Get-CimInstance Win32_Process | Where-Object {$_.ParentProcessId -eq $p[1].processId})
    if ($childProcesses.Length -eq 0) {
      return $p[1]
    }
  }
  return $null
}

function pollForHangingPacmanProcessesAndTerminateThem {
  param (
    [int]$sleepSecondsBetweenPolling = 15,
    [int]$idleFactor = 0.01
  )
  $alreadySeenPID = $null
  $alreadySeenCPU = 0
  while ($true) {
    $hangingProcess = getHangingPacmanProcess
    $hangingPID = $hangingProcess.processId
    if ($hangingPID -ne $null) {
      $CPU = $hangingProcess.CPU
      if ($alreadySeenPID -ne $hangingPID) {
        Write-Host "Looking at PID $($hangingPID): $($hangingProcess.CommandLine)"
      } elseif (($CPU - $alreadySeenCPU) -gt ($sleepSecondsBetweenPolling * $idleFactor)) {
        Write-Host "PID $hangingPID still too busy: spent $($CPU - $alreadySeenCPU)/$sleepSecondsBetweenPolling seconds"
      } else {
        Write-Host "Terminating $hangingPID"
        Stop-Process -Force -Id $hangingPID
        $hangingPID = $null
      }
      $alreadySeenCPU = $CPU
    }
    $alreadySeenPID = $hangingPID
    Start-Sleep -Seconds $sleepSecondsBetweenPolling
  }
}

pollForHangingPacmanProcessesAndTerminateThem -SleepSecondsBetweenPolling 5
