ACLOCAL_AMFLAGS = -I m4 --install

EXTRA_DIST = m4/NOTES
AM_CPPFLAGS = -I$(srcdir)/include

lib_LTLIBRARIES = libhelloworld.la 
libhelloworld_la_SOURCES = src/hello_world.c
libhelloworld_la_LDFLAGS = -version-info 0:1:0
include_HEADERS=include/hello_world.h

bin_PROGRAMS = helloworld glibsurfuring
helloworld_LDADD = $(LOG4CLIB) libhelloworld.la
helloworld_SOURCES = src/print_helloworld.c 

glibsurfuring_CFLAGS = $(GLIB_CFLAGS)
glibsurfuring_LDFLAGS = $(GLIB_LDFLAGS)
glibsurfuring_LDADD = $(GLIB_LIBS)
glibsurfuring_SOURCES = src/glib_surfuring.c 