# This file is part of Autoconf.                       -*- Autoconf -*-
# Fortran languages support.
# Copyright (C) 2001, 2003-2017, 2020-2023 Free Software Foundation,
# Inc.

# This file is part of Autoconf.  This program is free
# software; you can redistribute it and/or modify it under the
# terms of the GNU General Public License as published by the
# Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# Under Section 7 of GPL version 3, you are granted additional
# permissions described in the Autoconf Configure Script Exception,
# version 3.0, as published by the Free Software Foundation.
#
# You should have received a copy of the GNU General Public License
# and a copy of the Autoconf Configure Script Exception along with
# this program; see the files COPYINGv3 and COPYING.EXCEPTION
# respectively.  If not, see <https://www.gnu.org/licenses/>.

# Written by David MacKenzie, with help from
# François Pinard, Karl Berry, Richard Pixley, Ian Lance Taylor,
# Roland McGrath, Noah Friedman, david d zuhn, and many others.


# Table of Contents:
#
# Preamble
#
# 0. Utility macros
#
# 1. Language selection
#    and routines to produce programs in a given language.
#
# 2. Producing programs in a given language.
#
# 3. Looking for a compiler
#    And possibly the associated preprocessor.
#
# 4. Compilers' characteristics.



## ---------- ##
## Preamble.  ##
## ---------- ##

# Fortran vs. Fortran 77:
#   This file contains macros for both "Fortran 77" and "Fortran", where
# the former is the "classic" autoconf Fortran interface and is intended
# for legacy F77 codes, while the latter is intended to support newer Fortran
# dialects.  Fortran 77 uses environment variables F77, FFLAGS, and FLIBS,
# while Fortran uses FC, FCFLAGS, and FCLIBS.  For each user-callable AC_*
# macro, there is generally both an F77 and an FC version, where both versions
# share the same _AC_*_FC_* backend.  This backend macro requires that
# the appropriate language be AC_LANG_PUSH'ed, and uses _AC_LANG_ABBREV and
# _AC_LANG_PREFIX in order to name cache and environment variables, etc.



## ------------------- ##
## 0. Utility macros.  ##
## ------------------- ##


# _AC_LIST_MEMBER_IF(ELEMENT, LIST, [ACTION-IF-FOUND], [ACTION-IF-NOT-FOUND])
# ---------------------------------------------------------------------------
#
# Processing the elements of a list is tedious in shell programming,
# as lists tend to be implemented as space delimited strings.
#
# This macro searches LIST for ELEMENT, and executes ACTION-IF-FOUND
# if ELEMENT is a member of LIST, otherwise it executes
# ACTION-IF-NOT-FOUND.
AC_DEFUN([_AC_LIST_MEMBER_IF],
dnl Do some sanity checking of the arguments.
[m4_if([$1], , [m4_fatal([$0: missing argument 1])],
      [$2], , [m4_fatal([$0: missing argument 2])])]dnl
[  ac_exists=false
  for ac_i in $2; do
    if test x"$1" = x"$ac_i"; then
      ac_exists=true
      break
    fi
  done

  AS_IF([test x"$ac_exists" = xtrue], [$3], [$4])[]dnl
])# _AC_LIST_MEMBER_IF


# _AC_LINKER_OPTION(LINKER-OPTIONS, SHELL-VARIABLE)
# -------------------------------------------------
#
# Specifying options to the compiler (whether it be the C, C++ or
# Fortran 77 compiler) that are meant for the linker is compiler
# dependent.  This macro lets you give options to the compiler that
# are meant for the linker in a portable, compiler-independent way.
#
# This macro take two arguments, a list of linker options that the
# compiler should pass to the linker (LINKER-OPTIONS) and the name of
# a shell variable (SHELL-VARIABLE).  The list of linker options are
# appended to the shell variable in a compiler-dependent way.
#
# For example, if the selected language is C, then this:
#
#   _AC_LINKER_OPTION([-R /usr/local/lib/foo], foo_LDFLAGS)
#
# will expand into this if the selected C compiler is gcc:
#
#   foo_LDFLAGS="-Xlinker -R -Xlinker /usr/local/lib/foo"
#
# otherwise, it will expand into this:
#
#   foo_LDFLAGS"-R /usr/local/lib/foo"
#
# You are encouraged to add support for compilers that this macro
# doesn't currently support.
# FIXME: Get rid of this macro.
AC_DEFUN([_AC_LINKER_OPTION],
[if test "$ac_compiler_gnu" = yes; then
  for ac_link_opt in $1; do
    $2="[$]$2 -Xlinker $ac_link_opt"
  done
else
  $2="[$]$2 $1"
fi[]dnl
])# _AC_LINKER_OPTION



## ------------------------ ##
## 1a. Language selection.  ##
## ------------------------ ##


# AC_LANG(Fortran 77)
# -------------------
AC_LANG_DEFINE([Fortran 77], [f77], [F], [F77], [],
[ac_ext=f
ac_compile='$F77 -c $FFLAGS conftest.$ac_ext >&AS_MESSAGE_LOG_FD'
ac_link='$F77 -o conftest$ac_exeext $FFLAGS $LDFLAGS conftest.$ac_ext $LIBS >&AS_MESSAGE_LOG_FD'
ac_compiler_gnu=$ac_cv_f77_compiler_gnu
])


# AC_LANG_FORTRAN77
# -----------------
AU_DEFUN([AC_LANG_FORTRAN77], [AC_LANG(Fortran 77)])


# _AC_FORTRAN_ASSERT
# ------------------
# Current language must be Fortran or Fortran 77.
m4_defun([_AC_FORTRAN_ASSERT],
[m4_if(_AC_LANG, [Fortran], [],
       [m4_if(_AC_LANG, [Fortran 77], [],
	      [m4_fatal([$0: current language is not Fortran: ] _AC_LANG)])])])


# _AC_FC
# ------
# Return F77 or FC, depending upon the language.
AC_DEFUN([_AC_FC],
[_AC_FORTRAN_ASSERT()dnl
AC_LANG_CASE([Fortran 77], [F77],
	     [Fortran],    [FC])])



## ----------------------- ##
## 2. Producing programs.  ##
## ----------------------- ##


# AC_LANG_PROGRAM(Fortran 77)([PROLOGUE], [BODY])
# -----------------------------------------------
# Yes, we discard the PROLOGUE.
m4_define([AC_LANG_PROGRAM(Fortran 77)],
[m4_ifval([$1],
       [m4_warn([syntax], [$0: ignoring PROLOGUE: $1])])dnl
      program main
$2
      end])


# _AC_LANG_IO_PROGRAM(Fortran 77)
# -------------------------------
# Produce source that performs I/O.
m4_define([_AC_LANG_IO_PROGRAM(Fortran 77)],
[AC_LANG_PROGRAM([],
[dnl
      open(unit=9,file='conftest.out')
      close(unit=9)
])])


# AC_LANG_CALL(Fortran 77)(PROLOGUE, FUNCTION)
# --------------------------------------------
# FIXME: This is a guess, help!
m4_define([AC_LANG_CALL(Fortran 77)],
[AC_LANG_PROGRAM([$1],
[      call $2])])


# AC_LANG_FUNC_LINK_TRY(Fortran 77)(FUNCTION)
# -------------------------------------------
m4_define([AC_LANG_FUNC_LINK_TRY(Fortran 77)],
[AC_LANG_PROGRAM([],
[      call $1])])

## ------------------------ ##
## 1b. Language selection.  ##
## ------------------------ ##


# AC_LANG(Fortran)
# ----------------
AC_LANG_DEFINE([Fortran], [fc], [FC], [FC], [Fortran 77],
[ac_ext=${ac_fc_srcext-f}
ac_compile='$FC -c $FCFLAGS $ac_fcflags_srcext conftest.$ac_ext >&AS_MESSAGE_LOG_FD'
ac_link='$FC -o conftest$ac_exeext $FCFLAGS $LDFLAGS $ac_fcflags_srcext conftest.$ac_ext $LIBS >&AS_MESSAGE_LOG_FD'
ac_compiler_gnu=$ac_cv_fc_compiler_gnu
])


## -------------------------------------------- ##
## 3. Looking for Compilers and Preprocessors.  ##
## -------------------------------------------- ##


# AC_LANG_PREPROC(Fortran 77)
# ---------------------------
# Find the Fortran 77 preprocessor.  Must be AC_DEFUN'd to be AC_REQUIRE'able.
AC_DEFUN([AC_LANG_PREPROC(Fortran 77)],
[m4_warn([syntax],
	 [$0: No preprocessor defined for ]_AC_LANG)])

# AC_LANG_PREPROC(Fortran)
# ------------------------
# Find the Fortran preprocessor.  Must be AC_DEFUN'd to be AC_REQUIRE'able.
AC_DEFUN([AC_LANG_PREPROC(Fortran)],
[m4_warn([syntax],
	 [$0: No preprocessor defined for ]_AC_LANG)])


# AC_LANG_COMPILER(Fortran 77)
# ----------------------------
# Find the Fortran 77 compiler.  Must be AC_DEFUN'd to be
# AC_REQUIRE'able.
AC_DEFUN([AC_LANG_COMPILER(Fortran 77)],
[AC_REQUIRE([AC_PROG_F77])])

# AC_LANG_COMPILER(Fortran)
# -------------------------
# Find the Fortran compiler.  Must be AC_DEFUN'd to be
# AC_REQUIRE'able.
AC_DEFUN([AC_LANG_COMPILER(Fortran)],
[AC_REQUIRE([AC_PROG_FC])])


# ac_cv_prog_g77
# --------------
# We used to name the cache variable this way.
AU_DEFUN([ac_cv_prog_g77],
[ac_cv_f77_compiler_gnu])


# _AC_FC_DIALECT_YEAR([DIALECT])
# ------------------------------
# Given a Fortran DIALECT, which is Fortran [YY]YY or simply [YY]YY,
# convert to a 4-digit year.  The dialect must be one of Fortran 77,
# 90, 95, or 2000, currently.  If DIALECT is simply Fortran or the
# empty string, returns the empty string.
AC_DEFUN([_AC_FC_DIALECT_YEAR],
[m4_case(m4_bpatsubsts(m4_tolower([$1]), [fortran],[], [ *],[]),
	 [77],[1977], [1977],[1977],
	 [90],[1990], [1990],[1990],
	 [95],[1995], [1995],[1995],
	 [2000],[2000],
	 [],[],
	 [m4_fatal([unknown Fortran dialect])])])


# _AC_FC_COMPILER_GNU
# ---------------------
# Check whether the compiler for the current language is GNU.
#
# This is similar to _AC_LANG_COMPILER_GNU.  But also considers LLVM Flang
# a GNU-compatible compiler.  Pay attention to the fact that the position
# of 'choke me' on the seventh column is intentional: otherwise
# some Fortran compilers (e.g., SGI) might consider it's a
# continuation line, and warn instead of reporting an error.
m4_define([_AC_FC_COMPILER_GNU],
[AC_CACHE_CHECK([whether the compiler supports GNU _AC_LANG],
		[ac_cv_[]_AC_LANG_ABBREV[]_compiler_gnu],
		[_AC_COMPILE_IFELSE([AC_LANG_PROGRAM([], [[#ifndef __GNUC__
       choke me
#endif
]])],
		  [ac_compiler_gnu=yes],
		  [_AC_COMPILE_IFELSE([AC_LANG_PROGRAM([], [[#ifndef __flang__
       choke me
#endif
]])],
		    [case `$[]_AC_FC[] $[]_AC_LANG_PREFIX[]FLAGS --print-target-triple < /dev/null 2>&1` in
		      *mingw*|*-gnu)
		        ac_compiler_gnu=yes
		        ;;
		      *-msvc)
		        ac_compiler_gnu=no
		        ;;
		      *)
		        ## assume Flang is GNU-compatible by default
		        ac_compiler_gnu=yes
		        ;;
		    esac],
		    [ac_compiler_gnu=no])])
ac_cv_[]_AC_LANG_ABBREV[]_compiler_gnu=$ac_compiler_gnu
])
ac_compiler_gnu=$ac_cv_[]_AC_LANG_ABBREV[]_compiler_gnu
])# _AC_FC_COMPILER_GNU


# _AC_PROG_FC([DIALECT], [COMPILERS...])
# --------------------------------------
# DIALECT is a Fortran dialect, given by Fortran [YY]YY or simply [YY]YY,
# and must be one of those supported by _AC_FC_DIALECT_YEAR
#
# If DIALECT is supplied, then we search for compilers of that dialect
# first, and then later dialects.  Otherwise, we search for compilers
# of the newest dialect first, and then earlier dialects in increasing age.
# This search order is necessarily imperfect because the dialect cannot
# always be inferred from the compiler name.
#
# Known compilers:
#  f77/f90/f95: generic compiler names
#  g77: GNU Fortran 77 compiler
#  gfortran: GNU Fortran 95+ compiler (released in gcc 4.0)
#  g95: original gcc-based f95 compiler (gfortran is a fork)
#  ftn: native Fortran 95 compiler on Cray X1
#  cf77: native F77 compiler under older Crays (prefer over fort77)
#  fort77: native F77 compiler under HP-UX (and some older Crays)
#  frt: Fujitsu F77 compiler
#  pgf77/pgf90/pghpf/pgf95/pgfortran: Portland Group F77/F90/F95 compilers
#  xlf/xlf90/xlf95: IBM (AIX) F77/F90/F95 compilers
#    Prefer xlf9x to the generic names because they do not reject files
#    with extension '.f'.
#  lf95: Lahey-Fujitsu F95 compiler
#  fl32: Microsoft Fortran 77 "PowerStation" compiler
#  af77: Apogee F77 compiler for Intergraph hardware running CLIX
#  epcf90: "Edinburgh Portable Compiler" F90
#  fort: Compaq (now HP) Fortran 90/95 compiler for Tru64 and Linux/Alpha
#  ifort, previously ifc: Intel Fortran 95 compiler for Linux/x86
#  efc: Intel Fortran 95 compiler for IA64
#  nagfor: NAGWare Fortran 77/90/95 compiler
m4_define([_AC_F95_FC], [gfortran g95 xlf95 f95 fort ifort ifc efc pgfortran pgf95 lf95 ftn nagfor])
m4_define([_AC_F90_FC], [xlf90 f90 pgf90 pghpf epcf90])
m4_define([_AC_F77_FC], [g77 xlf f77 frt pgf77 cf77 fort77 fl32 af77])
AC_DEFUN([_AC_PROG_FC],
[_AC_FORTRAN_ASSERT()dnl
AC_CHECK_TOOLS([]_AC_FC[],
      m4_default([$2],
	m4_case(_AC_FC_DIALECT_YEAR([$1]),
		[1995], [_AC_F95_FC],
		[1990], [_AC_F90_FC _AC_F95_FC],
		[1977], [_AC_F77_FC _AC_F90_FC _AC_F95_FC],
		[_AC_F95_FC _AC_F90_FC _AC_F77_FC])))

# Provide some information about the compiler.
_AS_ECHO_LOG([checking for _AC_LANG compiler version])
set X $ac_compile
ac_compiler=$[2]
for ac_option in --version -v -V -qversion; do
  _AC_DO_LIMIT([$ac_compiler $ac_option >&AS_MESSAGE_LOG_FD])
done
rm -f a.out

m4_expand_once([_AC_COMPILER_EXEEXT])[]dnl
m4_expand_once([_AC_COMPILER_OBJEXT])[]dnl
# If we don't use '.F' as extension, the preprocessor is not run on the
# input file.  (Note that this only needs to work for GNU compilers.)
ac_save_ext=$ac_ext
ac_ext=F
_AC_FC_COMPILER_GNU
ac_ext=$ac_save_ext
_AC_PROG_FC_G
])# _AC_PROG_FC


# AC_PROG_F77([COMPILERS...])
# ---------------------------
# COMPILERS is a space separated list of Fortran 77 compilers to search
# for.  See also _AC_PROG_FC.
AC_DEFUN([AC_PROG_F77],
[AC_LANG_PUSH(Fortran 77)dnl
AC_ARG_VAR([F77],    [Fortran 77 compiler command])dnl
AC_ARG_VAR([FFLAGS], [Fortran 77 compiler flags])dnl
_AC_ARG_VAR_LDFLAGS()dnl
_AC_ARG_VAR_LIBS()dnl
_AC_PROG_FC([Fortran 77], [$1])
if test $ac_compiler_gnu = yes; then
  G77=yes
else
  G77=
fi
AC_LANG_POP(Fortran 77)dnl
])# AC_PROG_F77


# AC_PROG_FC([COMPILERS...], [DIALECT])
# -------------------------------------
# COMPILERS is a space separated list of Fortran 77 compilers to search
# for, and [DIALECT] is an optional dialect.  See also _AC_PROG_FC.
AC_DEFUN([AC_PROG_FC],
[AC_LANG_PUSH(Fortran)dnl
AC_ARG_VAR([FC],    [Fortran compiler command])dnl
AC_ARG_VAR([FCFLAGS], [Fortran compiler flags])dnl
_AC_ARG_VAR_LDFLAGS()dnl
_AC_ARG_VAR_LIBS()dnl
_AC_PROG_FC([$2], [$1])
if test $ac_compiler_gnu = yes; then
  GFC=yes
else
  GFC=
fi
AC_LANG_POP(Fortran)dnl
])# AC_PROG_FC


# _AC_PROG_FC_G
# -------------
# Check whether -g works, even if F[C]FLAGS is set, in case the package
# plays around with F[C]FLAGS (such as to build both debugging and normal
# versions of a library), tasteless as that idea is.
m4_define([_AC_PROG_FC_G],
[_AC_FORTRAN_ASSERT()dnl
ac_test_[]_AC_LANG_PREFIX[]FLAGS=${[]_AC_LANG_PREFIX[]FLAGS+y}
ac_save_[]_AC_LANG_PREFIX[]FLAGS=$[]_AC_LANG_PREFIX[]FLAGS
_AC_LANG_PREFIX[]FLAGS=
AC_CACHE_CHECK(whether $[]_AC_FC[] accepts -g, ac_cv_prog_[]_AC_LANG_ABBREV[]_g,
[_AC_LANG_PREFIX[]FLAGS=-g
_AC_COMPILE_IFELSE([AC_LANG_PROGRAM()],
[ac_cv_prog_[]_AC_LANG_ABBREV[]_g=yes],
[ac_cv_prog_[]_AC_LANG_ABBREV[]_g=no])
])
if test $ac_test_[]_AC_LANG_PREFIX[]FLAGS; then
  _AC_LANG_PREFIX[]FLAGS=$ac_save_[]_AC_LANG_PREFIX[]FLAGS
elif test $ac_cv_prog_[]_AC_LANG_ABBREV[]_g = yes; then
  if test "x$ac_cv_[]_AC_LANG_ABBREV[]_compiler_gnu" = xyes; then
    _AC_LANG_PREFIX[]FLAGS="-g -O2"
  else
    _AC_LANG_PREFIX[]FLAGS="-g"
  fi
else
  if test "x$ac_cv_[]_AC_LANG_ABBREV[]_compiler_gnu" = xyes; then
    _AC_LANG_PREFIX[]FLAGS="-O2"
  else
    _AC_LANG_PREFIX[]FLAGS=
  fi
fi[]dnl
])# _AC_PROG_FC_G


# _AC_PROG_FC_C_O
# ---------------
# Test if the Fortran compiler accepts the options '-c' and '-o'
# simultaneously, and define '[F77/FC]_NO_MINUS_C_MINUS_O' if it does not.
#
# The usefulness of this macro is questionable, as I can't really see
# why anyone would use it.  The only reason I include it is for
# completeness, since a similar test exists for the C compiler.
#
# FIXME: it seems like we could merge the C/C++/Fortran versions of this.
AC_DEFUN([_AC_PROG_FC_C_O],
[_AC_FORTRAN_ASSERT()dnl
AC_CACHE_CHECK([whether $[]_AC_FC[] understands -c and -o together],
	       [ac_cv_prog_[]_AC_LANG_ABBREV[]_c_o],
[AC_LANG_CONFTEST([AC_LANG_PROGRAM([])])
# We test twice because some compilers refuse to overwrite an existing
# '.o' file with '-o', although they will create one.
ac_try='$[]_AC_FC[] $[]_AC_LANG_PREFIX[]FLAGS -c conftest.$ac_ext -o conftest2.$ac_objext >&AS_MESSAGE_LOG_FD'
rm -f conftest2.*
if _AC_DO_VAR(ac_try) &&
     test -f conftest2.$ac_objext &&
     _AC_DO_VAR(ac_try); then
  ac_cv_prog_[]_AC_LANG_ABBREV[]_c_o=yes
else
  ac_cv_prog_[]_AC_LANG_ABBREV[]_c_o=no
fi
rm -rf conftest*])
if test $ac_cv_prog_[]_AC_LANG_ABBREV[]_c_o = no; then
  AC_DEFINE([]_AC_FC[]_NO_MINUS_C_MINUS_O, 1,
	    [Define to 1 if your Fortran compiler doesn't accept
	     -c and -o together.])
fi
])# _AC_PROG_FC_C_O


# AC_PROG_F77_C_O
# ---------------
AC_DEFUN([AC_PROG_F77_C_O],
[AC_REQUIRE([AC_PROG_F77])dnl
AC_LANG_PUSH(Fortran 77)dnl
_AC_PROG_FC_C_O
AC_LANG_POP(Fortran 77)dnl
])# AC_PROG_F77_C_O


# AC_PROG_FC_C_O
# --------------
AC_DEFUN([AC_PROG_FC_C_O],
[AC_REQUIRE([AC_PROG_FC])dnl
AC_LANG_PUSH(Fortran)dnl
_AC_PROG_FC_C_O
AC_LANG_POP(Fortran)dnl
])# AC_PROG_FC_C_O



## ------------------------------- ##
## 4. Compilers' characteristics.  ##
## ------------------------------- ##


# _AC_PROG_FC_V_OUTPUT([FLAG = $ac_cv_prog_{f77/fc}_v])
# -----------------------------------------------------
# Link a trivial Fortran program, compiling with a verbose output FLAG
# (whose default value, $ac_cv_prog_{f77/fc}_v, is computed by
# _AC_PROG_FC_V), and return the output in $ac_{f77/fc}_v_output.  This
# output is processed in the way expected by _AC_FC_LIBRARY_LDFLAGS,
# so that any link flags that are echoed by the compiler appear as
# space-separated items.
AC_DEFUN([_AC_PROG_FC_V_OUTPUT],
[_AC_FORTRAN_ASSERT()dnl
AC_LANG_CONFTEST([AC_LANG_PROGRAM([])])

# Compile and link our simple test program by passing a flag (argument
# 1 to this macro) to the Fortran compiler in order to get
# "verbose" output that we can then parse for the Fortran linker
# flags.
ac_save_[]_AC_LANG_PREFIX[]FLAGS=$[]_AC_LANG_PREFIX[]FLAGS
_AC_LANG_PREFIX[]FLAGS="$[]_AC_LANG_PREFIX[]FLAGS m4_default([$1], [$ac_cv_prog_[]_AC_LANG_ABBREV[]_v])"
eval "set x $ac_link"
shift
_AS_ECHO_LOG([$[*]])
# gfortran 4.3 outputs lines setting COLLECT_GCC_OPTIONS, COMPILER_PATH,
# LIBRARY_PATH; skip all such settings.
ac_[]_AC_LANG_ABBREV[]_v_output=`eval $ac_link AS_MESSAGE_LOG_FD>&1 2>&1 |
  sed '/^Driving:/d; /^Configured with:/d;
      '"/^[[_$as_cr_Letters]][[_$as_cr_alnum]]*=/d"`
AS_ECHO(["$ac_[]_AC_LANG_ABBREV[]_v_output"]) >&AS_MESSAGE_LOG_FD
_AC_LANG_PREFIX[]FLAGS=$ac_save_[]_AC_LANG_PREFIX[]FLAGS

rm -rf conftest*

# On HP/UX there is a line like: "LPATH is: /foo:/bar:/baz" where
# /foo, /bar, and /baz are search directories for the Fortran linker.
# Here, we change these into -L/foo -L/bar -L/baz (and put it first):
ac_[]_AC_LANG_ABBREV[]_v_output="`echo $ac_[]_AC_LANG_ABBREV[]_v_output |
	grep 'LPATH is:' |
	sed 's|.*LPATH is\(: *[[^ ]]*\).*|\1|;s|: */| -L/|g'` $ac_[]_AC_LANG_ABBREV[]_v_output"

# FIXME: we keep getting bitten by quoted arguments; a more general fix
#        that detects unbalanced quotes in FLIBS should be implemented
#        and (ugh) tested at some point.
case $ac_[]_AC_LANG_ABBREV[]_v_output in
  # With xlf replace commas with spaces,
  # and remove "-link" and closing parenthesis.
  *xlfentry*)
    ac_[]_AC_LANG_ABBREV[]_v_output=`echo $ac_[]_AC_LANG_ABBREV[]_v_output |
      sed '
        s/,/ /g
        s/ -link / /g
        s/) *$//
      '
    ` ;;

  # With Intel ifc, ignore the quoted -mGLOB_options_string stuff (quoted
  # $LIBS confuse us, and the libraries appear later in the output anyway).
  *mGLOB_options_string*)
    ac_[]_AC_LANG_ABBREV[]_v_output=`echo $ac_[]_AC_LANG_ABBREV[]_v_output | sed 's/"-mGLOB[[^"]]*"/ /g'` ;;

  # Portland Group compiler has singly- or doubly-quoted -cmdline argument
  # Singly-quoted arguments were reported for versions 5.2-4 and 6.0-4.
  # Doubly-quoted arguments were reported for "PGF90/x86 Linux/x86 5.0-2".
  *-cmdline\ * | *-ignore\ * | *-def\ *)
    ac_[]_AC_LANG_ABBREV[]_v_output=`echo $ac_[]_AC_LANG_ABBREV[]_v_output | sed "\
	s/-cmdline  *'[[^']]*'/ /g; s/-cmdline  *\"[[^\"]]*\"/ /g
	s/-ignore  *'[[^']]*'/ /g; s/-ignore  *\"[[^\"]]*\"/ /g
	s/-def  *'[[^']]*'/ /g; s/-def  *\"[[^\"]]*\"/ /g"` ;;

  # If we are using fort77 (the f2c wrapper) then filter output and delete quotes.
  *fort77*f2c*gcc*)
    ac_[]_AC_LANG_ABBREV[]_v_output=`echo "$ac_[]_AC_LANG_ABBREV[]_v_output" | sed -n '
        /:[[	 ]]\+Running[[	 ]]\{1,\}"gcc"/{
          /"-c"/d
          /[[.]]c"*/d
          s/^.*"gcc"/"gcc"/
          s/"//gp
        }'` ;;

  # If we are using Cray Fortran then delete quotes.
  *cft90*)
    ac_[]_AC_LANG_ABBREV[]_v_output=`echo $ac_[]_AC_LANG_ABBREV[]_v_output | sed 's/"//g'` ;;
esac

])# _AC_PROG_FC_V_OUTPUT


# _AC_PROG_FC_V
# -------------
#
# Determine the flag that causes the Fortran compiler to print
# information of library and object files (normally -v)
# Needed for _AC_FC_LIBRARY_FLAGS
# Some compilers don't accept -v (Lahey: (-)-verbose, xlf: -V, Fujitsu: -###)
AC_DEFUN([_AC_PROG_FC_V],
[_AC_FORTRAN_ASSERT()dnl
AC_CACHE_CHECK([how to get verbose linking output from $[]_AC_FC[]],
		[ac_cv_prog_[]_AC_LANG_ABBREV[]_v],
[AC_COMPILE_IFELSE([AC_LANG_PROGRAM()],
[ac_cv_prog_[]_AC_LANG_ABBREV[]_v=
# Try some options frequently used verbose output
for ac_verb in -v -verbose --verbose -V -\#\#\#; do
  _AC_PROG_FC_V_OUTPUT($ac_verb)
  # look for -l* and *.a constructs in the output
  for ac_arg in $ac_[]_AC_LANG_ABBREV[]_v_output; do
     case $ac_arg in
	[[\\/]]*.a | ?:[[\\/]]*.a | -[[lLRu]]*)
	  ac_cv_prog_[]_AC_LANG_ABBREV[]_v=$ac_verb
	  break 2 ;;
     esac
  done
done
if test -z "$ac_cv_prog_[]_AC_LANG_ABBREV[]_v"; then
   AC_MSG_WARN([cannot determine how to obtain linking information from $[]_AC_FC[]])
fi],
		  [AC_MSG_WARN([compilation failed])])
])])# _AC_PROG_FC_V


# _AC_FC_LIBRARY_LDFLAGS
# ----------------------
#
# Determine the linker flags (e.g. "-L" and "-l") for the Fortran
# intrinsic and runtime libraries that are required to successfully
# link a Fortran program or shared library.  The output variable
# FLIBS/FCLIBS is set to these flags.
#
# This macro is intended to be used in those situations when it is
# necessary to mix, e.g. C++ and Fortran, source code into a single
# program or shared library.
#
# For example, if object files from a C++ and Fortran compiler must
# be linked together, then the C++ compiler/linker must be used for
# linking (since special C++-ish things need to happen at link time
# like calling global constructors, instantiating templates, enabling
# exception support, etc.).
#
# However, the Fortran intrinsic and runtime libraries must be
# linked in as well, but the C++ compiler/linker doesn't know how to
# add these Fortran libraries.  Hence, the macro
# "AC_F77_LIBRARY_LDFLAGS" was created to determine these Fortran
# libraries.
#
# This macro was packaged in its current form by Matthew D. Langston.
# However, nearly all of this macro came from the "OCTAVE_FLIBS" macro
# in "octave-2.0.13/aclocal.m4", and full credit should go to John
# W. Eaton for writing this extremely useful macro.  Thank you John.
AC_DEFUN([_AC_FC_LIBRARY_LDFLAGS],
[AC_REQUIRE([AC_CANONICAL_HOST])dnl
_AC_FORTRAN_ASSERT()dnl
_AC_PROG_FC_V
AC_CACHE_CHECK([for _AC_LANG libraries of $[]_AC_FC[]], ac_cv_[]_AC_LANG_ABBREV[]_libs,
[if test "x$[]_AC_LANG_PREFIX[]LIBS" != "x"; then
  ac_cv_[]_AC_LANG_ABBREV[]_libs="$[]_AC_LANG_PREFIX[]LIBS" # Let the user override the test.
else

_AC_PROG_FC_V_OUTPUT

ac_cv_[]_AC_LANG_ABBREV[]_libs=

# Save positional arguments (if any)
ac_save_positional="$[@]"

set X $ac_[]_AC_LANG_ABBREV[]_v_output
while test $[@%:@] != 1; do
  shift
  ac_arg=$[1]
  case $ac_arg in
	[[\\/]]*.a | ?:[[\\/]]*.a)
	  _AC_LIST_MEMBER_IF($ac_arg, $ac_cv_[]_AC_LANG_ABBREV[]_libs, ,
	      ac_cv_[]_AC_LANG_ABBREV[]_libs="$ac_cv_[]_AC_LANG_ABBREV[]_libs $ac_arg")
	  ;;
	-bI:*)
	  _AC_LIST_MEMBER_IF($ac_arg, $ac_cv_[]_AC_LANG_ABBREV[]_libs, ,
	     [_AC_LINKER_OPTION([$ac_arg], ac_cv_[]_AC_LANG_ABBREV[]_libs)])
	  ;;
	  # Ignore these flags.
	-lang* | -lcrt*.o | -lc | -lgcc* | -lSystem | -libmil | -little \
	  |-LANG:=* | -LIST:* | -LNO:* | -link)
	  ;;
	-lkernel32)
	  # Ignore this library only on Windows-like systems.
	  case $host_os in
	  cygwin* | msys* | mingw* | windows*) ;;
	  *)
	  _AC_LIST_MEMBER_IF($ac_arg, $ac_cv_[]_AC_LANG_ABBREV[]_libs, ,
			     ac_cv_[]_AC_LANG_ABBREV[]_libs="$ac_cv_[]_AC_LANG_ABBREV[]_libs $ac_arg")
	    ;;
	  esac
	  ;;
	-[[LRuYz]])
	  # These flags, when seen by themselves, take an argument.
	  # We remove the space between option and argument and re-iterate
	  # unless we find an empty arg or a new option (starting with -)
	  case $[2] in
	     "" | -*);;
	     *)
		ac_arg="$ac_arg$[2]"
		shift; shift
		set X $ac_arg "$[@]"
		;;
	  esac
	  ;;
	-YP,*)
	  for ac_j in `AS_ECHO(["$ac_arg"]) | sed -e 's/-YP,/-L/;s/:/ -L/g'`; do
	    _AC_LIST_MEMBER_IF($ac_j, $ac_cv_[]_AC_LANG_ABBREV[]_libs, ,
			       [ac_arg="$ac_arg $ac_j"
			       ac_cv_[]_AC_LANG_ABBREV[]_libs="$ac_cv_[]_AC_LANG_ABBREV[]_libs $ac_j"])
	  done
	  ;;
	-[[lLR]]*)
	  _AC_LIST_MEMBER_IF($ac_arg, $ac_cv_[]_AC_LANG_ABBREV[]_libs, ,
			     ac_cv_[]_AC_LANG_ABBREV[]_libs="$ac_cv_[]_AC_LANG_ABBREV[]_libs $ac_arg")
	  ;;
	-zallextract*| -zdefaultextract)
	  ac_cv_[]_AC_LANG_ABBREV[]_libs="$ac_cv_[]_AC_LANG_ABBREV[]_libs $ac_arg"
	  ;;
	-mllvm) ${2+shift};; # Defend against 'clang -mllvm -loopopt=0'.
	  # Ignore everything else.
  esac
done
# restore positional arguments
set X $ac_save_positional; shift

# We only consider "LD_RUN_PATH" on Solaris systems.  If this is seen,
# then we insist that the "run path" must be an absolute path (i.e. it
# must begin with a "/").
case `(uname -sr) 2>/dev/null` in
   "SunOS 5"*)
      ac_ld_run_path=`AS_ECHO(["$ac_[]_AC_LANG_ABBREV[]_v_output"]) |
			sed -n 's,^.*LD_RUN_PATH *= *\(/[[^ ]]*\).*$,-R\1,p'`
      test "x$ac_ld_run_path" != x &&
	_AC_LINKER_OPTION([$ac_ld_run_path], ac_cv_[]_AC_LANG_ABBREV[]_libs)
      ;;
esac
fi # test "x$[]_AC_LANG_PREFIX[]LIBS" = "x"
])
[]_AC_LANG_PREFIX[]LIBS="$ac_cv_[]_AC_LANG_ABBREV[]_libs"
AC_SUBST([]_AC_LANG_PREFIX[]LIBS)
])# _AC_FC_LIBRARY_LDFLAGS


# AC_F77_LIBRARY_LDFLAGS
# ----------------------
AC_DEFUN([AC_F77_LIBRARY_LDFLAGS],
[AC_REQUIRE([AC_PROG_F77])dnl
AC_LANG_PUSH(Fortran 77)dnl
_AC_FC_LIBRARY_LDFLAGS
AC_LANG_POP(Fortran 77)dnl
])# AC_F77_LIBRARY_LDFLAGS


# AC_FC_LIBRARY_LDFLAGS
# ---------------------
AC_DEFUN([AC_FC_LIBRARY_LDFLAGS],
[AC_REQUIRE([AC_PROG_FC])dnl
AC_LANG_PUSH(Fortran)dnl
_AC_FC_LIBRARY_LDFLAGS
AC_LANG_POP(Fortran)dnl
])# AC_FC_LIBRARY_LDFLAGS


# _AC_FC_DUMMY_MAIN([ACTION-IF-FOUND], [ACTION-IF-NOT-FOUND])
# -----------------------------------------------------------
#
# Detect name of dummy main routine required by the Fortran libraries,
# (if any) and define {F77,FC}_DUMMY_MAIN to this name (which should be
# used for a dummy declaration, if it is defined).  On some systems,
# linking a C program to the Fortran library does not work unless you
# supply a dummy function called something like MAIN__.
#
# Execute ACTION-IF-NOT-FOUND if no way of successfully linking a C
# program with the {F77,FC} libs is found; default to exiting with an error
# message.  Execute ACTION-IF-FOUND if a dummy routine name is needed
# and found or if it is not needed (default to defining {F77,FC}_DUMMY_MAIN
# when needed).
#
# What is technically happening is that the Fortran libraries provide
# their own main() function, which usually initializes Fortran I/O and
# similar stuff, and then calls MAIN__, which is the entry point of
# your program.  Usually, a C program will override this with its own
# main() routine, but the linker sometimes complain if you don't
# provide a dummy (never-called) MAIN__ routine anyway.
#
# Of course, programs that want to allow Fortran subroutines to do
# I/O, etcetera, should call their main routine MAIN__() (or whatever)
# instead of main().  A separate autoconf test (_AC_FC_MAIN) checks
# for the routine to use in this case (since the semantics of the test
# are slightly different).  To link to e.g. purely numerical
# libraries, this is normally not necessary, however, and most C/C++
# programs are reluctant to turn over so much control to Fortran.  =)
#
# The name variants we check for are (in order):
#   MAIN__ (g77, MAIN__ required on some systems; IRIX, MAIN__ optional)
#   MAIN_, __main (SunOS)
#   MAIN _MAIN __MAIN main_ main__ _main (we follow DDD and try these too)
AC_DEFUN([_AC_FC_DUMMY_MAIN],
[_AC_FORTRAN_ASSERT()dnl
m4_define(_AC_LANG_PROGRAM_C_[]_AC_FC[]_HOOKS,
[#ifdef ]_AC_FC[_DUMMY_MAIN
]AC_LANG_CASE([Fortran], [#ifndef FC_DUMMY_MAIN_EQ_F77])
[#  ifdef __cplusplus
     extern "C"
#  endif
   int ]_AC_FC[_DUMMY_MAIN() { return 1; }
]AC_LANG_CASE([Fortran], [#endif])
[#endif
])
AC_CACHE_CHECK([for dummy main to link with _AC_LANG libraries],
	       ac_cv_[]_AC_LANG_ABBREV[]_dummy_main,
[ac_[]_AC_LANG_ABBREV[]_dm_save_LIBS=$LIBS
 LIBS="$LIBS $[]_AC_LANG_PREFIX[]LIBS"
 ac_fortran_dm_var=[]_AC_FC[]_DUMMY_MAIN
 AC_LANG_PUSH(C)dnl

 # First, try linking without a dummy main:
 AC_LINK_IFELSE([AC_LANG_PROGRAM([], [])],
		[ac_cv_fortran_dummy_main=none],
		[ac_cv_fortran_dummy_main=unknown])

 if test $ac_cv_fortran_dummy_main = unknown; then
   for ac_func in MAIN__ MAIN_ __main MAIN _MAIN __MAIN main_ main__ _main; do
     AC_LINK_IFELSE([AC_LANG_PROGRAM([[@%:@define $ac_fortran_dm_var $ac_func]])],
		    [ac_cv_fortran_dummy_main=$ac_func; break])
   done
 fi
 AC_LANG_POP(C)dnl
 ac_cv_[]_AC_LANG_ABBREV[]_dummy_main=$ac_cv_fortran_dummy_main
 rm -rf conftest*
 LIBS=$ac_[]_AC_LANG_ABBREV[]_dm_save_LIBS
])
[]_AC_FC[]_DUMMY_MAIN=$ac_cv_[]_AC_LANG_ABBREV[]_dummy_main
AS_IF([test "$[]_AC_FC[]_DUMMY_MAIN" != unknown],
      [m4_default([$1],
[if test $[]_AC_FC[]_DUMMY_MAIN != none; then
  AC_DEFINE_UNQUOTED([]_AC_FC[]_DUMMY_MAIN, $[]_AC_FC[]_DUMMY_MAIN,
		     [Define to dummy 'main' function (if any) required to
		      link to the Fortran libraries.])
  if test "x$ac_cv_fc_dummy_main" = "x$ac_cv_f77_dummy_main"; then
	AC_DEFINE([FC_DUMMY_MAIN_EQ_F77], 1,
		  [Define if F77 and FC dummy 'main' functions are identical.])
  fi
fi])],
      [m4_default([$2],
	    [AC_MSG_FAILURE([linking to Fortran libraries from C fails])])])
])# _AC_FC_DUMMY_MAIN


# AC_F77_DUMMY_MAIN
# -----------------
AC_DEFUN([AC_F77_DUMMY_MAIN],
[AC_REQUIRE([AC_F77_LIBRARY_LDFLAGS])dnl
AC_LANG_PUSH(Fortran 77)dnl
_AC_FC_DUMMY_MAIN($@)
AC_LANG_POP(Fortran 77)dnl
])# AC_F77_DUMMY_MAIN


# AC_FC_DUMMY_MAIN
# ----------------
AC_DEFUN([AC_FC_DUMMY_MAIN],
[AC_REQUIRE([AC_FC_LIBRARY_LDFLAGS])dnl
AC_LANG_PUSH(Fortran)dnl
_AC_FC_DUMMY_MAIN($@)
AC_LANG_POP(Fortran)dnl
])# AC_FC_DUMMY_MAIN


# _AC_FC_MAIN
# -----------
# Define {F77,FC}_MAIN to name of alternate main() function for use with
# the Fortran libraries.  (Typically, the libraries may define their
# own main() to initialize I/O, etcetera, that then call your own
# routine called MAIN__ or whatever.)  See _AC_FC_DUMMY_MAIN, above.
# If no such alternate name is found, just define {F77,FC}_MAIN to main.
#
AC_DEFUN([_AC_FC_MAIN],
[_AC_FORTRAN_ASSERT()dnl
AC_CACHE_CHECK([for alternate main to link with _AC_LANG libraries],
	       ac_cv_[]_AC_LANG_ABBREV[]_main,
[ac_[]_AC_LANG_ABBREV[]_m_save_LIBS=$LIBS
 LIBS="$LIBS $[]_AC_LANG_PREFIX[]LIBS"
 ac_fortran_dm_var=[]_AC_FC[]_DUMMY_MAIN
 AC_LANG_PUSH(C)dnl
 ac_cv_fortran_main="main" # default entry point name
 for ac_func in MAIN__ MAIN_ __main MAIN _MAIN __MAIN main_ main__ _main; do
   AC_LINK_IFELSE([AC_LANG_PROGRAM([@%:@ifdef FC_DUMMY_MAIN_EQ_F77
@%:@  undef F77_DUMMY_MAIN
@%:@  undef FC_DUMMY_MAIN
@%:@else
@%:@  undef $ac_fortran_dm_var
@%:@endif
@%:@define main $ac_func])],
		  [ac_cv_fortran_main=$ac_func; break])
 done
 AC_LANG_POP(C)dnl
 ac_cv_[]_AC_LANG_ABBREV[]_main=$ac_cv_fortran_main
 rm -rf conftest*
 LIBS=$ac_[]_AC_LANG_ABBREV[]_m_save_LIBS
])
AC_DEFINE_UNQUOTED([]_AC_FC[]_MAIN, $ac_cv_[]_AC_LANG_ABBREV[]_main,
		   [Define to alternate name for 'main' routine that is
		    called from a 'main' in the Fortran libraries.])
])# _AC_FC_MAIN


# AC_F77_MAIN
# -----------
AC_DEFUN([AC_F77_MAIN],
[AC_REQUIRE([AC_F77_LIBRARY_LDFLAGS])dnl
AC_LANG_PUSH(Fortran 77)dnl
_AC_FC_MAIN
AC_LANG_POP(Fortran 77)dnl
])# AC_F77_MAIN


# AC_FC_MAIN
# ----------
AC_DEFUN([AC_FC_MAIN],
[AC_REQUIRE([AC_FC_LIBRARY_LDFLAGS])dnl
AC_LANG_PUSH(Fortran)dnl
_AC_FC_MAIN
AC_LANG_POP(Fortran)dnl
])# AC_FC_MAIN


# __AC_FC_NAME_MANGLING
# ---------------------
# Test for the name mangling scheme used by the Fortran compiler.
#
# Sets ac_cv_{f77,fc}_mangling. The value contains three fields, separated
# by commas:
#
# lower case / upper case:
#    case translation of the Fortran symbols
# underscore / no underscore:
#    whether the compiler appends "_" to symbol names
# extra underscore / no extra underscore:
#    whether the compiler appends an extra "_" to symbol names already
#    containing at least one underscore
#
AC_DEFUN([__AC_FC_NAME_MANGLING],
[_AC_FORTRAN_ASSERT()dnl
AC_CACHE_CHECK([for _AC_LANG name-mangling scheme],
	       ac_cv_[]_AC_LANG_ABBREV[]_mangling,
[AC_COMPILE_IFELSE(
[[      subroutine foobar()
      return
      end
      subroutine foo_bar()
      return
      end]],
[mv conftest.$ac_objext cfortran_test.$ac_objext

  ac_save_LIBS=$LIBS
  LIBS="cfortran_test.$ac_objext $LIBS $[]_AC_LANG_PREFIX[]LIBS"

  AC_LANG_PUSH(C)dnl
  ac_success=no
  for ac_foobar in foobar FOOBAR; do
    for ac_underscore in "" "_"; do
      ac_func="$ac_foobar$ac_underscore"
      AC_LINK_IFELSE([AC_LANG_CALL([], [$ac_func])],
		     [ac_success=yes; break 2])
    done
  done
  AC_LANG_POP(C)dnl

  if test "$ac_success" = "yes"; then
     case $ac_foobar in
	foobar)
	   ac_case=lower
	   ac_foo_bar=foo_bar
	   ;;
	FOOBAR)
	   ac_case=upper
	   ac_foo_bar=FOO_BAR
	   ;;
     esac

     AC_LANG_PUSH(C)dnl
     ac_success_extra=no
     for ac_extra in "" "_"; do
	ac_func="$ac_foo_bar$ac_underscore$ac_extra"
	AC_LINK_IFELSE([AC_LANG_CALL([], [$ac_func])],
		       [ac_success_extra=yes; break])
     done
     AC_LANG_POP(C)dnl

     if test "$ac_success_extra" = "yes"; then
	ac_cv_[]_AC_LANG_ABBREV[]_mangling="$ac_case case"
	if test -z "$ac_underscore"; then
	   ac_cv_[]_AC_LANG_ABBREV[]_mangling="$ac_cv_[]_AC_LANG_ABBREV[]_mangling, no underscore"
	else
	   ac_cv_[]_AC_LANG_ABBREV[]_mangling="$ac_cv_[]_AC_LANG_ABBREV[]_mangling, underscore"
	fi
	if test -z "$ac_extra"; then
	   ac_cv_[]_AC_LANG_ABBREV[]_mangling="$ac_cv_[]_AC_LANG_ABBREV[]_mangling, no extra underscore"
	else
	   ac_cv_[]_AC_LANG_ABBREV[]_mangling="$ac_cv_[]_AC_LANG_ABBREV[]_mangling, extra underscore"
	fi
      else
	ac_cv_[]_AC_LANG_ABBREV[]_mangling="unknown"
      fi
  else
     ac_cv_[]_AC_LANG_ABBREV[]_mangling="unknown"
  fi

  LIBS=$ac_save_LIBS
  rm -rf conftest*
  rm -f cfortran_test*],
  [AC_MSG_FAILURE([cannot compile a simple Fortran program])])
])
])# __AC_FC_NAME_MANGLING

# The replacement is empty.
AU_DEFUN([AC_F77_NAME_MANGLING], [])


# _AC_F77_NAME_MANGLING
# ---------------------
AC_DEFUN([_AC_F77_NAME_MANGLING],
[AC_REQUIRE([AC_F77_LIBRARY_LDFLAGS])dnl
AC_REQUIRE([AC_F77_DUMMY_MAIN])dnl
AC_LANG_PUSH(Fortran 77)dnl
__AC_FC_NAME_MANGLING
AC_LANG_POP(Fortran 77)dnl
])# _AC_F77_NAME_MANGLING


# _AC_FC_NAME_MANGLING
# --------------------
AC_DEFUN([_AC_FC_NAME_MANGLING],
[AC_REQUIRE([AC_FC_LIBRARY_LDFLAGS])dnl
AC_REQUIRE([AC_FC_DUMMY_MAIN])dnl
AC_LANG_PUSH(Fortran)dnl
__AC_FC_NAME_MANGLING
AC_LANG_POP(Fortran)dnl
])# _AC_FC_NAME_MANGLING


# _AC_FC_WRAPPERS
# ---------------
# Defines C macros {F77,FC}_FUNC(name,NAME) and {F77,FC}_FUNC_(name,NAME) to
# properly mangle the names of C identifiers, and C identifiers with
# underscores, respectively, so that they match the name mangling
# scheme used by the Fortran compiler.
AC_DEFUN([_AC_FC_WRAPPERS],
[_AC_FORTRAN_ASSERT()dnl
AH_TEMPLATE(_AC_FC[_FUNC],
    [Define to a macro mangling the given C identifier (in lower and upper
     case), which must not contain underscores, for linking with Fortran.])dnl
AH_TEMPLATE(_AC_FC[_FUNC_],
    [As ]_AC_FC[_FUNC, but for C identifiers containing underscores.])dnl
case $ac_cv_[]_AC_LANG_ABBREV[]_mangling in
  "lower case, no underscore, no extra underscore")
	  AC_DEFINE(_AC_FC[_FUNC(name,NAME)],  [name])
	  AC_DEFINE(_AC_FC[_FUNC_(name,NAME)], [name]) ;;
  "lower case, no underscore, extra underscore")
	  AC_DEFINE(_AC_FC[_FUNC(name,NAME)],  [name])
	  AC_DEFINE(_AC_FC[_FUNC_(name,NAME)], [name [##] _]) ;;
  "lower case, underscore, no extra underscore")
	  AC_DEFINE(_AC_FC[_FUNC(name,NAME)],  [name [##] _])
	  AC_DEFINE(_AC_FC[_FUNC_(name,NAME)], [name [##] _]) ;;
  "lower case, underscore, extra underscore")
	  AC_DEFINE(_AC_FC[_FUNC(name,NAME)],  [name [##] _])
	  AC_DEFINE(_AC_FC[_FUNC_(name,NAME)], [name [##] __]) ;;
  "upper case, no underscore, no extra underscore")
	  AC_DEFINE(_AC_FC[_FUNC(name,NAME)],  [NAME])
	  AC_DEFINE(_AC_FC[_FUNC_(name,NAME)], [NAME]) ;;
  "upper case, no underscore, extra underscore")
	  AC_DEFINE(_AC_FC[_FUNC(name,NAME)],  [NAME])
	  AC_DEFINE(_AC_FC[_FUNC_(name,NAME)], [NAME [##] _]) ;;
  "upper case, underscore, no extra underscore")
	  AC_DEFINE(_AC_FC[_FUNC(name,NAME)],  [NAME [##] _])
	  AC_DEFINE(_AC_FC[_FUNC_(name,NAME)], [NAME [##] _]) ;;
  "upper case, underscore, extra underscore")
	  AC_DEFINE(_AC_FC[_FUNC(name,NAME)],  [NAME [##] _])
	  AC_DEFINE(_AC_FC[_FUNC_(name,NAME)], [NAME [##] __]) ;;
  *)
	  AC_MSG_WARN([unknown Fortran name-mangling scheme])
	  ;;
esac
])# _AC_FC_WRAPPERS


# AC_F77_WRAPPERS
# ---------------
AC_DEFUN([AC_F77_WRAPPERS],
[AC_REQUIRE([_AC_F77_NAME_MANGLING])dnl
AC_LANG_PUSH(Fortran 77)dnl
_AC_FC_WRAPPERS
AC_LANG_POP(Fortran 77)dnl
])# AC_F77_WRAPPERS


# AC_FC_WRAPPERS
# --------------
AC_DEFUN([AC_FC_WRAPPERS],
[AC_REQUIRE([_AC_FC_NAME_MANGLING])dnl
AC_LANG_PUSH(Fortran)dnl
_AC_FC_WRAPPERS
AC_LANG_POP(Fortran)dnl
])# AC_FC_WRAPPERS


# _AC_FC_FUNC(NAME, [SHELLVAR = NAME])
# ------------------------------------
# For a Fortran subroutine of given NAME, define a shell variable
# $SHELLVAR to the Fortran-mangled name.  If the SHELLVAR
# argument is not supplied, it defaults to NAME.
AC_DEFUN([_AC_FC_FUNC],
[_AC_FORTRAN_ASSERT()dnl
case $ac_cv_[]_AC_LANG_ABBREV[]_mangling in
  upper*) ac_val="m4_toupper([$1])" ;;
  lower*) ac_val="m4_tolower([$1])" ;;
  *)      ac_val="unknown" ;;
esac
case $ac_cv_[]_AC_LANG_ABBREV[]_mangling in *," underscore"*) ac_val="$ac_val"_ ;; esac
m4_if(m4_index([$1],[_]),-1,[],
[case $ac_cv_[]_AC_LANG_ABBREV[]_mangling in *," extra underscore"*) ac_val="$ac_val"_ ;; esac
])
m4_default([$2],[$1])="$ac_val"
])# _AC_FC_FUNC


# AC_F77_FUNC(NAME, [SHELLVAR = NAME])
# ------------------------------------
AC_DEFUN([AC_F77_FUNC],
[AC_REQUIRE([_AC_F77_NAME_MANGLING])dnl
AC_LANG_PUSH(Fortran 77)dnl
_AC_FC_FUNC([$1],[$2])
AC_LANG_POP(Fortran 77)dnl
])# AC_F77_FUNC


# AC_FC_FUNC(NAME, [SHELLVAR = NAME])
# -----------------------------------
AC_DEFUN([AC_FC_FUNC],
[AC_REQUIRE([_AC_FC_NAME_MANGLING])dnl
AC_LANG_PUSH(Fortran)dnl
_AC_FC_FUNC([$1],[$2])
AC_LANG_POP(Fortran)dnl
])# AC_FC_FUNC


# AC_FC_SRCEXT(EXT, [ACTION-IF-SUCCESS], [ACTION-IF-FAILURE])
# -----------------------------------------------------------
# Set the source-code extension used in Fortran (FC) tests to EXT (which
# defaults to f).  Also, look for any necessary additional FCFLAGS needed
# to allow this extension, and store them in the output variable
# FCFLAGS_<EXT> (e.g. FCFLAGS_f90 for EXT=f90).  If successful,
# call ACTION-IF-SUCCESS.  If unable to compile source code with EXT,
# call ACTION-IF-FAILURE, which defaults to failing with an error
# message.
#
# (The flags for the current source-code extension, if any, are stored in
# $ac_fcflags_srcext and used automatically in subsequent autoconf tests.)
#
# For ordinary extensions like f90, etcetera, the modified FCFLAGS
# are currently needed for IBM's xlf* and Intel's ifc (grrr).  Unfortunately,
# xlf* will only take flags to recognize one extension at a time, so if the
# user wants to compile multiple extensions (.f90 and .f95, say), she
# will need to use the FCFLAGS_F90 and FCFLAGS_F95 individually rather
# than just adding them all to FCFLAGS, for example.
#
# Also, for Intel's ifc compiler (which does not accept .f95 by default in
# some versions), the $FCFLAGS_<EXT> variable *must* go immediately before
# the source file on the command line, unlike other $FCFLAGS.  Ugh.
#
# gfortran requires '-x f77' in order to recognize .f77 files.
AC_DEFUN([AC_FC_SRCEXT],
[AC_LANG_PUSH(Fortran)dnl
AC_CACHE_CHECK([for Fortran flag to compile .$1 files],
		ac_cv_fc_srcext_$1,
[ac_ext=$1
ac_fcflags_srcext_save=$ac_fcflags_srcext
ac_fcflags_srcext=
ac_cv_fc_srcext_$1=unknown
case $ac_ext in #(
  [[fF]]77) ac_try=f77;; #(
  *) ac_try=f95;;
esac
for ac_flag in none -qsuffix=f=$1 -Tf "-x $ac_try"; do
  test "x$ac_flag" != xnone && ac_fcflags_srcext="$ac_flag"
  AC_COMPILE_IFELSE([AC_LANG_PROGRAM()], [ac_cv_fc_srcext_$1=$ac_flag; break])
done
rm -f conftest.$ac_objext conftest.$1
ac_fcflags_srcext=$ac_fcflags_srcext_save
])
if test "x$ac_cv_fc_srcext_$1" = xunknown; then
  m4_default([$3],[AC_MSG_ERROR([Fortran could not compile .$1 files])])
else
  ac_fc_srcext=$1
  if test "x$ac_cv_fc_srcext_$1" = xnone; then
    ac_fcflags_srcext=""
    FCFLAGS_[]$1[]=""
  else
    ac_fcflags_srcext=$ac_cv_fc_srcext_$1
    FCFLAGS_[]$1[]=$ac_cv_fc_srcext_$1
  fi
  AC_SUBST(FCFLAGS_[]$1)
  $2
fi
AC_LANG_POP(Fortran)dnl
])# AC_FC_SRCEXT


# AC_FC_PP_SRCEXT(EXT, [ACTION-IF-SUCCESS], [ACTION-IF-FAILURE])
# --------------------------------------------------------------
# Like AC_FC_SRCEXT, set the source-code extension used in Fortran (FC) tests
# to EXT (which defaults to f).  Also, look for any necessary additional
# FCFLAGS needed to allow this extension for preprocessed Fortran, and store
# them in the output variable FCFLAGS_<EXT> (e.g. FCFLAGS_f90 for EXT=f90).
# If successful, call ACTION-IF-SUCCESS.  If unable to compile preprocessed
# source code with EXT, call ACTION-IF-FAILURE, which defaults to failing with
# an error message.
#
# Some compilers allow preprocessing with either a Fortran preprocessor or
# with the C preprocessor (cpp).  Prefer the Fortran preprocessor, to deal
# correctly with continuation lines, '//' (not a comment), and preserve white
# space (for fixed form).
#
# (The flags for the current source-code extension, if any, are stored in
# $ac_fcflags_srcext and used automatically in subsequent autoconf tests.)
#
# For ordinary extensions like f90, etcetera, the modified FCFLAGS
# are needed for IBM's xlf*.  Also, for Intel's ifort compiler, the
# $FCFLAGS_<EXT> variable *must* go immediately before the source file on the
# command line, unlike other $FCFLAGS.  Ugh.
#
# Known extensions that enable preprocessing by default, and flags to force it:
# GNU: .F .F90 .F95 .F03 .F08, -cpp for most others,
#      -x f77-cpp-input for .f77 .F77; -x f95-cpp-input for gfortran < 4.4
# SGI: .F .F90, -ftpp or -cpp for .f .f90, -E write preproc to stdout
#      -macro_expand enable macro expansion everywhere (with -ftpp)
#      -P preproc only, save in .i, no #line's
# SUN: .F .F95, -fpp for others; -xpp={fpp,cpp} for preprocessor selection
#      -F preprocess only (save in lowercase extension)
# IBM: .F .F77 .F90 .F95 .F03, -qsuffix=cpp=EXT for extension .EXT to invoke cpp
#      -WF,-qnofpp -WF,-qfpp=comment:linecont:nocomment:nolinecont
#      -WF,-qlanglvl=classic or not -qnoescape (trigraph problems)
#      -d no #line in output, -qnoobject for preprocessing only (output in .f)
#      -q{no,}ppsuborigarg substitute original macro args before expansion
# HP:  .F, +cpp={yes|no|default} use cpp, -cpp, +cpp_keep save in .i/.i90
# PGI: -Mpreprocess
# Absoft: .F .FOR .F90 .F95, -cpp for others
# Cray: .F .F90 .FTN, -e Z for others; -F enable macro expansion everywhere
# Intel: .F .F90, -fpp for others, but except for .f and .f90, -Tf may also be
#        needed right before the source file name
# PathScale: .F .F90 .F95, -ftpp or -cpp for .f .f90 .f95
#         -macro_expand for expansion everywhere, -P for no #line in output
# Lahey: .F .FOR .F90 .F95, -Cpp
# NAGWare: .F .F90 .F95, .ff .ff90 .ff95 (new), -fpp for others
# Compaq/Tru64: .F .F90, -cpp, -P keep .i file, -P keep .i file
# f2c: .F, -cpp
# g95: .F .FOR .F90 .F95 .F03, -cpp -no-cpp, -E for stdout
AC_DEFUN([AC_FC_PP_SRCEXT],
[AC_LANG_PUSH(Fortran)dnl
AC_CACHE_CHECK([for Fortran flag to compile preprocessed .$1 files],
		ac_cv_fc_pp_srcext_$1,
[ac_ext=$1
ac_fcflags_pp_srcext_save=$ac_fcflags_srcext
ac_fcflags_srcext=
ac_cv_fc_pp_srcext_$1=unknown
case $ac_ext in #(
  [[fF]]77) ac_try=f77-cpp-input;; #(
  *) ac_try=f95-cpp-input;;
esac
for ac_flag in none -ftpp -fpp -Tf "-fpp -Tf" -xpp=fpp -Mpreprocess "-e Z" \
               -cpp -xpp=cpp -qsuffix=cpp=$1 "-x $ac_try" +cpp -Cpp; do
  test "x$ac_flag" != xnone && ac_fcflags_srcext="$ac_flag"
  AC_COMPILE_IFELSE([AC_LANG_PROGRAM([], [[
#if 0
#include <ac_nonexistent.h>
      choke me
#endif]])],
    [AC_COMPILE_IFELSE([AC_LANG_PROGRAM([], [[
#if 1
#include <ac_nonexistent.h>
      choke me
#endif]])],
       [],
       [ac_cv_fc_pp_srcext_$1=$ac_flag; break])])
done
rm -f conftest.$ac_objext conftest.$1
ac_fcflags_srcext=$ac_fcflags_pp_srcext_save
])
if test "x$ac_cv_fc_pp_srcext_$1" = xunknown; then
  m4_default([$3],
             [AC_MSG_ERROR([Fortran could not compile preprocessed .$1 files])])
else
  ac_fc_srcext=$1
  if test "x$ac_cv_fc_pp_srcext_$1" = xnone; then
    ac_fcflags_srcext=""
    FCFLAGS_[]$1[]=""
  else
    ac_fcflags_srcext=$ac_cv_fc_pp_srcext_$1
    FCFLAGS_[]$1[]=$ac_cv_fc_pp_srcext_$1
  fi
  AC_SUBST(FCFLAGS_[]$1)
  $2
fi
AC_LANG_POP(Fortran)dnl
])# AC_FC_PP_SRCEXT


# AC_FC_PP_DEFINE([ACTION-IF-SUCCESS], [ACTION-IF-FAILURE = FAILURE])
# -------------------------------------------------------------------
# Find a flag to specify defines for preprocessed Fortran.  Not all
# Fortran compilers use -D.  Substitute FC_DEFINE with the result and
# call ACTION-IF-SUCCESS (defaults to nothing) if successful, and
# ACTION-IF-FAILURE (defaults to failing with an error message) if not.
#
# Known flags:
# IBM: -WF,-D
# Lahey/Fujitsu: -Wp,-D     older versions???
# f2c: -D or -Wc,-D
# others: -D
AC_DEFUN([AC_FC_PP_DEFINE],
[AC_LANG_PUSH([Fortran])dnl
ac_fc_pp_define_srcext_save=$ac_fc_srcext
AC_FC_PP_SRCEXT([F])
AC_CACHE_CHECK([how to define symbols for preprocessed Fortran],
  [ac_cv_fc_pp_define],
[ac_fc_pp_define_srcext_save=$ac_fc_srcext
ac_cv_fc_pp_define=unknown
ac_fc_pp_define_FCFLAGS_save=$FCFLAGS
for ac_flag in -D -WF,-D -Wp,-D -Wc,-D
do
  FCFLAGS="$ac_fc_pp_define_FCFLAGS_save ${ac_flag}FOOBAR ${ac_flag}ZORK=42"
  AC_COMPILE_IFELSE([AC_LANG_PROGRAM([], [[
#ifndef FOOBAR
      choke me
#endif
#if ZORK != 42
      choke me
#endif]])],
    [ac_cv_fc_pp_define=$ac_flag])
  test x"$ac_cv_fc_pp_define" != xunknown && break
done
FCFLAGS=$ac_fc_pp_define_FCFLAGS_save
])
ac_fc_srcext=$ac_fc_pp_define_srcext_save
if test "x$ac_cv_fc_pp_define" = xunknown; then
  FC_DEFINE=
  m4_default([$2],
	     [AC_MSG_ERROR([Fortran does not allow to define preprocessor symbols], 77)])
else
  FC_DEFINE=$ac_cv_fc_pp_define
  $1
fi
AC_SUBST([FC_DEFINE])dnl
AC_LANG_POP([Fortran])dnl
])


# AC_FC_FREEFORM([ACTION-IF-SUCCESS], [ACTION-IF-FAILURE = FAILURE])
# ------------------------------------------------------------------
# Look for a compiler flag to make the Fortran (FC) compiler accept
# free-format source code, and adds it to FCFLAGS.  Call
# ACTION-IF-SUCCESS (defaults to nothing) if successful (i.e. can
# compile code using new extension) and ACTION-IF-FAILURE (defaults to
# failing with an error message) if not.  (Defined via DEFUN_ONCE to
# prevent flag from being added to FCFLAGS multiple times.)
#
# The known flags are:
#        -ffree-form: GNU g77, gfortran, g95
#         -FR, -free: Intel compiler (icc, ecc, ifort)
#              -free: Compaq compiler (fort), Sun compiler (f95)
#             -qfree: IBM compiler (xlf)
# -Mfree, -Mfreeform: Portland Group compiler
#          -freeform: SGI compiler
#        -8, -f free: Absoft Fortran
#       +source=free: HP Fortran
#    (-)-nfix, -Free: Lahey/Fujitsu Fortran
#              -free: NAGWare
#         -f, -Wf,-f: f2c (but only a weak form of "free-form" and long lines)
# We try to test the "more popular" flags first, by some prejudiced
# notion of popularity.
AC_DEFUN_ONCE([AC_FC_FREEFORM],
[AC_LANG_PUSH([Fortran])dnl
AC_CACHE_CHECK([for Fortran flag needed to accept free-form source],
	       [ac_cv_fc_freeform],
[ac_cv_fc_freeform=unknown
ac_fc_freeform_FCFLAGS_save=$FCFLAGS
for ac_flag in none -ffree-form -FR -free -qfree -Mfree -Mfreeform \
	       -freeform "-f free" -8 +source=free -nfix --nfix -Free
do
  test "x$ac_flag" != xnone && FCFLAGS="$ac_fc_freeform_FCFLAGS_save $ac_flag"
dnl Use @&t@ below to ensure that editors don't turn 8+ spaces into tab.
  AC_COMPILE_IFELSE([[
  program freeform
       ! FIXME: how to best confuse non-freeform compilers?
       print *, 'Hello ', &
     @&t@     'world.'
       end]],
		    [ac_cv_fc_freeform=$ac_flag; break])
done
rm -f conftest.err conftest.$ac_objext conftest.$ac_ext
FCFLAGS=$ac_fc_freeform_FCFLAGS_save
])
if test "x$ac_cv_fc_freeform" = xunknown; then
  m4_default([$2],
	     [AC_MSG_ERROR([Fortran does not accept free-form source], 77)])
else
  if test "x$ac_cv_fc_freeform" != xnone; then
    FCFLAGS="$FCFLAGS $ac_cv_fc_freeform"
  fi
  $1
fi
AC_LANG_POP([Fortran])dnl
])# AC_FC_FREEFORM


# AC_FC_FIXEDFORM([ACTION-IF-SUCCESS], [ACTION-IF-FAILURE = FAILURE])
# ------------------------------------------------------------------
# Look for a compiler flag to make the Fortran (FC) compiler accept
# fixed-format source code, and adds it to FCFLAGS.  Call
# ACTION-IF-SUCCESS (defaults to nothing) if successful (i.e. can
# compile code using new extension) and ACTION-IF-FAILURE (defaults to
# failing with an error message) if not.  (Defined via DEFUN_ONCE to
# prevent flag from being added to FCFLAGS multiple times.)
#
# The known flags are:
#       -ffixed-form: GNU g77, gfortran, g95
#             -fixed: Intel compiler (ifort), Sun compiler (f95)
#            -qfixed: IBM compiler (xlf*)
#            -Mfixed: Portland Group compiler
#         -fixedform: SGI compiler
#           -f fixed: Absoft Fortran
#      +source=fixed: HP Fortran
#    (-)-fix, -Fixed: Lahey/Fujitsu Fortran
#             -fixed: NAGWare
# Since compilers may accept fixed form based on file name extension,
# but users may want to use it with others as well, call AC_FC_SRCEXT
# with the respective source extension before calling this macro.
AC_DEFUN_ONCE([AC_FC_FIXEDFORM],
[AC_LANG_PUSH([Fortran])dnl
AC_CACHE_CHECK([for Fortran flag needed to accept fixed-form source],
	       [ac_cv_fc_fixedform],
[ac_cv_fc_fixedform=unknown
ac_fc_fixedform_FCFLAGS_save=$FCFLAGS
for ac_flag in none -ffixed-form -fixed -qfixed -Mfixed -fixedform "-f fixed" \
	       +source=fixed -fix --fix -Fixed
do
  test "x$ac_flag" != xnone && FCFLAGS="$ac_fc_fixedform_FCFLAGS_save $ac_flag"
  AC_COMPILE_IFELSE([[
C     This comment should confuse free-form compilers.
      program main
      end]],
		    [ac_cv_fc_fixedform=$ac_flag; break])
done
rm -f conftest.err conftest.$ac_objext conftest.$ac_ext
FCFLAGS=$ac_fc_fixedform_FCFLAGS_save
])
if test "x$ac_cv_fc_fixedform" = xunknown; then
  m4_default([$2],
	     [AC_MSG_ERROR([Fortran does not accept fixed-form source], 77)])
else
  if test "x$ac_cv_fc_fixedform" != xnone; then
    FCFLAGS="$FCFLAGS $ac_cv_fc_fixedform"
  fi
  $1
fi
AC_LANG_POP([Fortran])dnl
])# AC_FC_FIXEDFORM


# AC_FC_LINE_LENGTH([LENGTH], [ACTION-IF-SUCCESS],
#		    [ACTION-IF-FAILURE = FAILURE])
# ------------------------------------------------
# Look for a compiler flag to make the Fortran (FC) compiler accept long lines
# in the current (free- or fixed-format) source code, and adds it to FCFLAGS.
# The optional LENGTH may be 80, 132 (default), or 'unlimited' for longer
# lines.  Note that line lengths above 250 columns are not portable, and some
# compilers (hello ifort) do not accept more than 132 columns at least for
# fixed format.  Call ACTION-IF-SUCCESS (defaults to nothing) if successful
# (i.e. can compile code using new extension) and ACTION-IF-FAILURE (defaults
# to failing with an error message) if not.  (Defined via DEFUN_ONCE to
# prevent flag from being added to FCFLAGS multiple times.)
# You should call AC_FC_FREEFORM or AC_FC_FIXEDFORM to set the desired format
# prior to using this macro.
#
# The known flags are:
# -f{free,fixed}-line-length-N with N 72, 80, 132, or 0 or none for none.
# -ffree-line-length-none: GNU gfortran
# -ffree-line-length-huge: g95 (also -ffixed-line-length-N as above)
#       -qfixed=132 80 72: IBM compiler (xlf)
#                -Mextend: Cray
#            -132 -80 -72: Intel compiler (ifort)
#                          Needs to come before -extend_source because ifort
#                          accepts that as well with an optional parameter and
#                          doesn't fail but only warns about unknown arguments.
#          -extend_source: SGI compiler
#  -W, -WNN (132, 80, 72): Absoft Fortran
#     +es, +extend_source: HP Fortran (254 in either form, default is 72 fixed,
#			   132 free)
#            -w, (-)-wide: Lahey/Fujitsu Fortran (255 cols in fixed form)
#                      -e: Sun Fortran compiler (132 characters)
#                    -132: NAGWare
#         -72, -f, -Wf,-f: f2c (a weak form of "free-form" and long lines).
#                  /XLine: Open Watcom
AC_DEFUN_ONCE([AC_FC_LINE_LENGTH],
[AC_LANG_PUSH([Fortran])dnl
m4_case(m4_default([$1], [132]),
  [unlimited], [ac_fc_line_len_string=unlimited
	               ac_fc_line_len=0
                       ac_fc_line_length_test='
      subroutine longer_than_132(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,'\
'arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19)'],
  [132],            [ac_fc_line_len=132
		       ac_fc_line_length_test='
      subroutine longer_than_80(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,'\
'arg10)'],
  [80],             [ac_fc_line_len=80
		       ac_fc_line_length_test='
      subroutine longer_than_72(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9)'],
  [m4_warning([Invalid length argument '$1'])])
: ${ac_fc_line_len_string=$ac_fc_line_len}
AC_CACHE_CHECK(
[for Fortran flag needed to accept $ac_fc_line_len_string column source lines],
	       [ac_cv_fc_line_length],
[ac_cv_fc_line_length=unknown
ac_fc_line_length_FCFLAGS_save=$FCFLAGS
for ac_flag in none \
	       -ffree-line-length-none -ffixed-line-length-none \
	       -ffree-line-length-huge \
	       -ffree-line-length-$ac_fc_line_len \
	       -ffixed-line-length-$ac_fc_line_len \
	       -qfixed=$ac_fc_line_len -Mextend \
	       -$ac_fc_line_len -extend_source \
	       -W$ac_fc_line_len -W +extend_source +es -wide --wide -w -e \
               -f -Wf,-f -xline
do
  test "x$ac_flag" != xnone && FCFLAGS="$ac_fc_line_length_FCFLAGS_save $ac_flag"
  AC_COMPILE_IFELSE([[$ac_fc_line_length_test
      end subroutine]],
		    [ac_cv_fc_line_length=$ac_flag; break])
done
rm -f conftest.err conftest.$ac_objext conftest.$ac_ext
FCFLAGS=$ac_fc_line_length_FCFLAGS_save
])
if test "x$ac_cv_fc_line_length" = xunknown; then
  m4_default([$3],
	     [AC_MSG_ERROR([Fortran does not accept long source lines], 77)])
else
  if test "x$ac_cv_fc_line_length" != xnone; then
    FCFLAGS="$FCFLAGS $ac_cv_fc_line_length"
  fi
  $2
fi
AC_LANG_POP([Fortran])dnl
])# AC_FC_LINE_LENGTH


# AC_FC_CHECK_BOUNDS([ACTION-IF-SUCCESS], [ACTION-IF-FAILURE = FAILURE])
# ----------------------------------------------------------------------
# Look for a compiler flag to turn on array bounds checking for the
# Fortran (FC) compiler, and adds it to FCFLAGS.  Call
# ACTION-IF-SUCCESS (defaults to nothing) if successful (i.e. can
# compile code using new extension) and ACTION-IF-FAILURE (defaults to
# failing with an error message) if not.  (Defined via DEFUN_ONCE to
# prevent flag from being added to FCFLAGS multiple times.)
#
# The known flags are:
# -fcheck=all, -fbounds-check: gfortran
#     -fbounds-check: g77, g95
# -CB, -check bounds: Intel compiler (icc, ecc, ifort)
#                 -C: Sun/Oracle compiler (f95)
#        -C, -qcheck: IBM compiler (xlf)
#           -Mbounds: Portland Group compiler
#       -C ,-Mbounds: Cray
#  -C, -check_bounds: SGI compiler
# -check_bounds, +check=all: HP Fortran
#        -C, -Rb -Rc: Absoft (-Rb: array boundaries, -Rc: array conformance)
# --chk e,s -chk (e,s): Lahey
#          -C -C=all: NAGWare
# -C, -ffortran-bounds-check: PathScale pathf90
#                 -C: f2c
#            -BOunds: Open Watcom
AC_DEFUN_ONCE([AC_FC_CHECK_BOUNDS],
[AC_LANG_PUSH([Fortran])dnl
AC_CACHE_CHECK([for Fortran flag to enable array-bounds checking],
               [ac_cv_fc_check_bounds],
[ac_cv_fc_check_bounds=unknown
ac_fc_check_bounds_FCFLAGS_save=$FCFLAGS
for ac_flag in -fcheck=bounds -fbounds-check -check_bounds -Mbounds -qcheck \
               '-check bounds' +check=all --check '-Rb -Rc' -CB -C=all -C \
               -ffortran-bounds-check "--chk e,s" "-chk e -chk s" -bounds
do
  FCFLAGS="$ac_fc_check_bounds_FCFLAGS_save $ac_flag"
  # We should be able to link a correct program.
  AC_LINK_IFELSE([AC_LANG_PROGRAM([], [])],
    [AC_LINK_IFELSE([[
      subroutine sub(a)
      integer a(:)
      a(8) = 0
      end subroutine

      program main
      integer a(1:7)
      interface
         subroutine sub(a)
         integer a(:)
         end subroutine
      end interface

      call sub(a)
      end program]],
       [# If we can run the program, require failure at run time.
	# In cross-compiling mode, we rely on the compiler not accepting
	# unknown options.
	AS_IF([test "$cross_compiling" = yes],
	  [ac_cv_fc_check_bounds=$ac_flag; break],
	  [AS_IF([_AC_DO_TOKENS(./conftest$ac_exeext)],
	     [],
	     [ac_cv_fc_check_bounds=$ac_flag; break])])])])
done
rm -f conftest$ac_exeext conftest.err conftest.$ac_objext conftest.$ac_ext \
  core *.core core.conftest.*
FCFLAGS=$ac_fc_check_bounds_FCFLAGS_save
])
if test "x$ac_cv_fc_check_bounds" = xunknown; then
  m4_default([$2],
             [AC_MSG_ERROR([no Fortran flag for bounds checking found], 77)])
else
  if test "x$ac_cv_fc_check_bounds" != xnone; then
    FCFLAGS="$FCFLAGS $ac_cv_fc_check_bounds"
  fi
  $1
fi
AC_LANG_POP([Fortran])dnl
])# AC_FC_CHECK_BOUNDS


# _AC_FC_IMPLICIT_NONE([ACTION-IF-SUCCESS], [ACTION-IF-FAILURE = FAILURE])
# ------------------------------------------------------------------------
# Look for a flag to disallow implicit declarations, and add it to FCFLAGS.
# Call ACTION-IF-SUCCESS (defaults to nothing) if successful and
# ACTION-IF-FAILURE (defaults to failing with an error message) if not.
#
# Known flags:
# GNU gfortran, g95: -fimplicit-none, g77: -Wimplicit
# Intel: -u, -implicitnone; might also need '-warn errors' to turn into error.
# Sun/Oracle: -u
# HP: +implicit_none
# IBM: -u, -qundef
# SGI: -u
# Compaq: -u, -warn declarations
# NAGWare: -u
# Lahey: -in, --in, -AT
# Cray: -Mdclchk -e I
# PGI: -Mcdlchk
# f2c: -u
AC_DEFUN([_AC_FC_IMPLICIT_NONE],
[_AC_FORTRAN_ASSERT()dnl
AC_CACHE_CHECK([for flag to disallow _AC_LANG implicit declarations],
               [ac_cv_[]_AC_LANG_ABBREV[]_implicit_none],
[ac_cv_[]_AC_LANG_ABBREV[]_implicit_none=unknown
ac_fc_implicit_none_[]_AC_LANG_PREFIX[]FLAGS_save=$[]_AC_LANG_PREFIX[]FLAGS
for ac_flag in none -fimplicit-none -u -Wimplicit -implicitnone +implicit_none \
               -qundef "-warn declarations" -in --in -AT "-e I" -Mdclchk \
               "-u -warn errors"
do
  if test "x$ac_flag" != xnone; then
    _AC_LANG_PREFIX[]FLAGS="$ac_fc_implicit_none_[]_AC_LANG_PREFIX[]FLAGS_save $ac_flag"
  fi
  AC_COMPILE_IFELSE([AC_LANG_PROGRAM([], [])],
    [AC_COMPILE_IFELSE([AC_LANG_PROGRAM([], [[
      i = 0
      print *, i]])],
       [],
       [ac_cv_[]_AC_LANG_ABBREV[]_implicit_none=$ac_flag; break])])
done
rm -f conftest.err conftest.$ac_objext conftest.$ac_ext
_AC_LANG_PREFIX[]FLAGS=$ac_fc_implicit_none_[]_AC_LANG_PREFIX[]FLAGS_save
])
if test "x$ac_cv_[]_AC_LANG_ABBREV[]_implicit_none" = xunknown; then
  m4_default([$3],
    [AC_MSG_ERROR([no Fortran flag to disallow implicit declarations found], 77)])
else
  if test "x$ac_cv_[]_AC_LANG_ABBREV[]_implicit_none" != xnone; then
    _AC_LANG_PREFIX[]FLAGS="$_AC_LANG_PREFIX[]FLAGS $ac_cv_[]_AC_LANG_ABBREV[]_implicit_none"
  fi
  $2
fi
])# _AC_FC_IMPLICIT_NONE


# AC_F77_IMPLICIT_NONE([ACTION-IF-SUCCESS], [ACTION-IF-FAILURE = FAILURE])
# ------------------------------------------------------------------------
AC_DEFUN([AC_F77_IMPLICIT_NONE],
[AC_LANG_PUSH([Fortran 77])dnl
_AC_FC_IMPLICIT_NONE($@)
AC_LANG_POP([Fortran 77])dnl
])# AC_F77_IMPLICIT_NONE


# AC_FC_IMPLICIT_NONE([ACTION-IF-SUCCESS], [ACTION-IF-FAILURE = FAILURE])
# -----------------------------------------------------------------------
AC_DEFUN([AC_FC_IMPLICIT_NONE],
[AC_LANG_PUSH([Fortran])dnl
_AC_FC_IMPLICIT_NONE($@)
AC_LANG_POP([Fortran])dnl
])# AC_FC_IMPLICIT_NONE


# AC_FC_MODULE_EXTENSION
# ----------------------
# Find the Fortran 90 module file extension.  The module extension is stored
# in the variable FC_MODEXT and empty if it cannot be determined.  The result
# or "unknown" is cached in the cache variable ac_cv_fc_module_ext.
AC_DEFUN([AC_FC_MODULE_EXTENSION],
[AC_CACHE_CHECK([Fortran 90 module extension], [ac_cv_fc_module_ext],
[AC_LANG_PUSH(Fortran)
mkdir conftest.dir
cd conftest.dir
ac_cv_fc_module_ext=unknown
AC_COMPILE_IFELSE([[
      module conftest_module
      contains
      subroutine conftest_routine
      write(*,'(a)') 'gotcha!'
      end subroutine
      end module]],
  [ac_cv_fc_module_ext=`ls | sed -n 's,conftest_module\.,,p'`
   if test x$ac_cv_fc_module_ext = x; then
dnl Some F90 compilers use upper case characters for the module file name.
     ac_cv_fc_module_ext=`ls | sed -n 's,CONFTEST_MODULE\.,,p'`
   fi])
cd ..
rm -rf conftest.dir
AC_LANG_POP(Fortran)
])
FC_MODEXT=$ac_cv_fc_module_ext
if test "$FC_MODEXT" = unknown; then
  FC_MODEXT=
fi
AC_SUBST([FC_MODEXT])dnl
])


# AC_FC_MODULE_FLAG([ACTION-IF-SUCCESS], [ACTION-IF-FAILURE = FAILURE])
# ---------------------------------------------------------------------
# Find a flag to include Fortran 90 modules from another directory.
# If successful, run ACTION-IF-SUCCESS (defaults to nothing), otherwise
# run ACTION-IF-FAILURE (defaults to failing with an error message).
# The module flag is cached in the ac_cv_fc_module_flag variable.
# It may contain significant trailing whitespace.
#
# Known flags:
# gfortran: -Idir, -I dir (-M dir, -Mdir (deprecated), -Jdir for writing)
# g95: -I dir (-fmod=dir for writing)
# SUN: -Mdir, -M dir (-moddir=dir for writing;
#                     -Idir for includes is also searched)
# HP: -Idir, -I dir (+moddir=dir for writing)
# IBM: -Idir (-qmoddir=dir for writing)
# Intel: -Idir -I dir (-mod dir for writing)
# Absoft: -pdir
# Lahey: -mod dir
# Cray: -module dir, -p dir (-J dir for writing)
#       -e m is needed to enable writing .mod files at all
# Compaq: -Idir
# NAGWare: -I dir
# PathScale: -I dir  (but -module dir is looked at first)
# Portland: -module dir (first -module also names dir for writing)
# Fujitsu: -Am -Idir (-Mdir for writing is searched first, then '.', then -I)
#                    (-Am indicates how module information is saved)
AC_DEFUN([AC_FC_MODULE_FLAG],[
AC_CACHE_CHECK([Fortran 90 module inclusion flag], [ac_cv_fc_module_flag],
[AC_LANG_PUSH([Fortran])
ac_cv_fc_module_flag=unknown
mkdir conftest.dir
cd conftest.dir
AC_COMPILE_IFELSE([[
      module conftest_module
      contains
      subroutine conftest_routine
      write(*,'(a)') 'gotcha!'
      end subroutine
      end module]],
  [cd ..
   ac_fc_module_flag_FCFLAGS_save=$FCFLAGS
   # Flag ordering is significant for gfortran and Sun.
   for ac_flag in -M -I '-I ' '-M ' -p '-mod ' '-module ' '-Am -I'; do
     # Add the flag twice to prevent matching an output flag.
     FCFLAGS="$ac_fc_module_flag_FCFLAGS_save ${ac_flag}conftest.dir ${ac_flag}conftest.dir"
     AC_COMPILE_IFELSE([[
      program main
      use conftest_module
      call conftest_routine
      end program]],
       [ac_cv_fc_module_flag="$ac_flag"])
     if test "$ac_cv_fc_module_flag" != unknown; then
       break
     fi
   done
   FCFLAGS=$ac_fc_module_flag_FCFLAGS_save
])
rm -rf conftest.dir
AC_LANG_POP([Fortran])
])
if test "$ac_cv_fc_module_flag" != unknown; then
  FC_MODINC=$ac_cv_fc_module_flag
  $1
else
  FC_MODINC=
  m4_default([$2],
    [AC_MSG_ERROR([unable to find compiler flag for module search path])])
fi
AC_SUBST([FC_MODINC])
# Ensure trailing whitespace is preserved in a Makefile.
AC_SUBST([ac_empty], [""])
AC_CONFIG_COMMANDS_PRE([case $FC_MODINC in #(
  *\ ) FC_MODINC=$FC_MODINC'${ac_empty}' ;;
esac])dnl
])


# AC_FC_MODULE_OUTPUT_FLAG([ACTION-IF-SUCCESS], [ACTION-IF-FAILURE = FAILURE])
# ----------------------------------------------------------------------------
# Find a flag to write Fortran 90 module information to another directory.
# If successful, run ACTION-IF-SUCCESS (defaults to nothing), otherwise
# run ACTION-IF-FAILURE (defaults to failing with an error message).
# The module flag is cached in the ac_cv_fc_module_output_flag variable.
# It may contain significant trailing whitespace.
#
# For known flags, see the documentation of AC_FC_MODULE_FLAG above.
AC_DEFUN([AC_FC_MODULE_OUTPUT_FLAG],[
AC_CACHE_CHECK([Fortran 90 module output flag], [ac_cv_fc_module_output_flag],
[AC_LANG_PUSH([Fortran])
mkdir conftest.dir conftest.dir/sub
cd conftest.dir
ac_cv_fc_module_output_flag=unknown
ac_fc_module_output_flag_FCFLAGS_save=$FCFLAGS
# Flag ordering is significant: put flags late which some compilers use
# for the search path.
for ac_flag in -J '-J ' -fmod= -moddir= +moddir= -qmoddir= '-mdir ' '-mod ' \
	      '-module ' -M '-Am -M' '-e m -J '; do
  FCFLAGS="$ac_fc_module_output_flag_FCFLAGS_save ${ac_flag}sub"
  AC_COMPILE_IFELSE([[
      module conftest_module
      contains
      subroutine conftest_routine
      write(*,'(a)') 'gotcha!'
      end subroutine
      end module]],
    [cd sub
     AC_COMPILE_IFELSE([[
      program main
      use conftest_module
      call conftest_routine
      end program]],
       [ac_cv_fc_module_output_flag=$ac_flag])
     cd ..
     AS_IF([test x"$ac_cv_fc_module_output_flag" != xunknown],[break])])
done
FCFLAGS=$ac_fc_module_output_flag_FCFLAGS_save
cd ..
rm -rf conftest.dir
AC_LANG_POP([Fortran])
])
AS_IF([test x"$ac_cv_fc_module_output_flag" != xunknown],
  [FC_MODOUT=$ac_cv_fc_module_output_flag
   $1],
  [FC_MODOUT=
   m4_default([$2],
    [AC_MSG_ERROR([unable to find compiler flag to write module information to])])])
AC_SUBST([FC_MODOUT])
# Ensure trailing whitespace is preserved in a Makefile.
AC_SUBST([ac_empty], [""])
AC_CONFIG_COMMANDS_PRE([case $FC_MODOUT in #(
  *\ ) FC_MODOUT=$FC_MODOUT'${ac_empty}' ;;
esac])dnl
])


# _AC_FC_CRAY_POINTERS([ACTION-IF-SUCCESS], [ACTION-IF-FAILURE = FAILURE])
#-------------------------------------------------------------------------
# Try to ensure that the Fortran compiler supports Cray pointers, a
# non-standard extension that provides a C-like pointer in Fortran.
#
# If successful, ACTION-IF-SUCCESS is called.  If no argument is provided, then
# any necessary flags are added to F[C]FLAGS.  Otherwise, ACTION-IF-FAILURE is
# called, which defaults to failing with an error message.
#
# Most compilers provide an implementation of Cray pointers, and often no
# additional flags are required to enable support.  A partial list of compilers
# and flags which may be required are listed below.
#
# The known flags are:
#   -fcray-pointer: gfortran
#   -Mcray-pointer: PGI
AC_DEFUN([_AC_FC_CRAY_POINTERS], [
  AC_MSG_CHECKING([for $[]_AC_FC[] option to support Cray pointers])
  AC_CACHE_VAL([ac_cv_[]_AC_LANG_ABBREV[]_cray_ptr], [
    ac_cv_[]_AC_LANG_ABBREV[]_cray_ptr='unknown'
    ac_save_[]_AC_LANG_PREFIX[]FLAGS=$[]_AC_LANG_PREFIX[]FLAGS
    for ac_option in none -fcray-pointer -Mcray=pointer; do
      test "$ac_option" != none && _AC_LANG_PREFIX[]FLAGS="$ac_save_[]_AC_LANG_PREFIX[]FLAGS $ac_option"
      AC_COMPILE_IFELSE(
        [AC_LANG_PROGRAM([], [
      integer aptr(2)
      pointer (iptr, aptr)
        ])],
        [ac_cv_[]_AC_LANG_ABBREV[]_cray_ptr=$ac_option],
      )
      _AC_LANG_PREFIX[]FLAGS=$ac_save_[]_AC_LANG_PREFIX[]FLAGS
      AS_IF([test "$ac_cv_[]_AC_LANG_ABBREV[]_cray_ptr" != unknown], [break])
    done
  ])
  AS_CASE([ac_cv_[]_AC_LANG_ABBREV[]_cray_ptr],
    [none], [AC_MSG_RESULT([none_needed])],
    [unknown], [AC_MSG_RESULT([unsupported])],
    [AC_MSG_RESULT([$ac_cv_[]_AC_LANG_ABBREV[]_cray_ptr])]
  )
  AS_IF([test "$ac_cv_[]_AC_LANG_ABBREV[]_cray_ptr" != unknown], [
    m4_default([$1], [
      AS_IF([test "$ac_cv_[]_AC_LANG_ABBREV[]_cray_ptr" != none],
        [_AC_LANG_PREFIX[]FLAGS="$[]_AC_LANG_PREFIX[]FLAGS $ac_cv_[]_AC_LANG_ABBREV[]_cray_ptr"]
      )
    ])],
    [m4_default([$2], [AC_MSG_ERROR(["$[]_AC_FC[] does not support Cray pointers"])])]
  )
])


# AC_F77_CRAY_POINTERS
#---------------------
AC_DEFUN([AC_F77_CRAY_POINTERS], [
  AC_REQUIRE([AC_PROG_F77])
  AC_LANG_PUSH([Fortran 77])
  _AC_FC_CRAY_POINTERS($@)
  AC_LANG_POP([Fortran 77])
])


# AC_FC_CRAY_POINTERS
#--------------------
AC_DEFUN([AC_FC_CRAY_POINTERS], [
  AC_REQUIRE([AC_PROG_FC])
  AC_LANG_PUSH([Fortran])
  _AC_FC_CRAY_POINTERS($@)
  AC_LANG_POP([Fortran])
])
