# Example for use of GNU gettext.
# This file is in the public domain.
#
# Makefile configuration - processed by automake.

# General automake options.
AUTOMAKE_OPTIONS = foreign no-dependencies
ACLOCAL_AMFLAGS = -I m4

# The list of subdirectories containing Makefiles.
SUBDIRS = m4 po

# The list of programs that are built.
bin_PROGRAMS = hello-server

# The source files of the 'hello-server' program.
hello_server_SOURCES = hello-server.c

# Define a C macro LOCALEDIR indicating where catalogs will be installed.
DEFS = -DLOCALEDIR=\"$(localedir)\" @DEFS@

# Link time dependencies.
LDADD = @LIBINTL@

# Additional files to be distributed.
EXTRA_DIST = autogen.sh autoclean.sh
