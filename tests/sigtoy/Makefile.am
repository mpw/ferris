
# A list of all the files in the current directory which can be regenerated
MAINTAINERCLEANFILES = Makefile.in

noinst_PROGRAMS = sigtoy

INCLUDES = -I$(top_builddir)/lib -I$(top_srcdir)/lib                                               \
	                                \
	-I. 						\
	-I$(srcdir) -I$(top_srcdir) -I$(top_srcdir)/src	\
	-I$(top_builddir)				\
        -I$(includedir)                                 

sigtoy_SOURCES = sigtoy.cpp
sigtoy_LDFLAGS =  


# useful for tracking down static binding errors in a lib.
#sigtoy_LDFLAGS =  -lstlport_gcc $(GTK_LIBS) -lsocketpp \
#	-lfampp -lssl -ledb -lfile -lcrypto -lpopt @LIBFERRIS_LA@ 


