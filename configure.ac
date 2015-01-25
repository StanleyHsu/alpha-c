#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])

AC_INIT([alpha-c], [0.0.1], [bingcanxu@gmail.com], 
	[alpha-c], [https://github.com/StanleyHsu/alpha-c])

# Safety check - list a source file that wouldn't be in other directories:
	AC_CONFIG_SRCDIR([src/print_helloworld.c])
	
# Put autotools auxiliary files in subdirectories to reduce clutter:
	AC_CONFIG_AUX_DIR([build-aux])
	AC_CONFIG_MACRO_DIR([m4])

# Enable "automake" to simplify creating makefiles:
	AM_INIT_AUTOMAKE([foreign subdir-objects -Wall -Werror])

# Checks for programs.
	AC_PROG_CC

# Checks for libraries.
	AC_CHECK_LIB([log4c], [log4c_category_get], [LOG4CLIB=-llog4c])
	AC_SUBST([LOG4CLIB])

# Checks for header files.
	AC_CHECK_HEADERS([sys/time.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
	AC_CHECK_FUNCS([gettimeofday memset])
	AC_FUNC_MALLOC
	
	
# Put Makefile results here
	AC_CONFIG_HEADERS([config.h])
	AC_CONFIG_FILES([Makefile])
# Do final output.
AC_OUTPUT
