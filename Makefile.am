ACLOCAL_AMFLAGS = -I m4 --install

EXTRA_DIST = m4/NOTES
AM_CPPFLAGS = -I$(srcdir)/include

bin_PROGRAMS = helloworld
helloworld_LDADD = $(LOG4CLIB)
helloworld_SOURCES = src/hello_world.c src/print_helloworld.c 