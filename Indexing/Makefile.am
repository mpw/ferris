
# A list of all the files in the current directory which can be regenerated
MAINTAINERCLEANFILES = Makefile.in

INCLUDES = @STLDB4_CFLAGS@ @BOOST_CFLAGS@ @GLIB_CFLAGS@ @CFLAGS@ 


noinst_LTLIBRARIES      = libferrisindexing.la
ferrisincludedir=$(includedir)/Ferris

libferrisindexing_la_SOURCES = \
	IndexPrivate.hh        \
	ThreeInFourLexicon.cpp \
	FilesystemLexicon.cpp  \
	UncompressedDB4.cpp    \
	XMLLexicon.cpp         \
	BoostMultiIndexLexicon.cpp \
	IndexPrivate.cpp       

#libferrisindexing_la_LIBADD =

libferrisindexing_la_LDFLAGS =          \
	@STLDB4_LIBS@                   \
	@BOOST_LIBS@                    \
	@GLIB_LIBS@                 	

##########################################################################
##########################################################################
##########################################################################

