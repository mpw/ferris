
# A list of all the files in the current directory which can be regenerated
MAINTAINERCLEANFILES = Makefile.in

bin_PROGRAMS = ferrisls

INCLUDES = @GLIB_CFLAGS@ @CFLAGS@

ferrisls_SOURCES = ls.cpp
ferrisls_LDADD = -lpopt @LIBFERRIS_LA@ 
ferrisls_LDFLAGS = $(GLIB_LIBS) 

