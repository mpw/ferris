if HAVE_SOPRANO

plugindir = $(libdir)/ferris/plugins/eagenerators

INCLUDES = -I$(top_srcdir)/plugins/eagenerators @SOPRANO_CFLAGS@ @CFLAGS@

plugin_LTLIBRARIES = libferrissoprano.la 
libferrissoprano_la_SOURCES = libferrissoprano.cpp
libferrissoprano_la_LDFLAGS = @GLIB_LIBS@ @SOPRANO_LIBS@ \
	libferrissopranoeashared.la                      \
	@LIBFERRIS_EAPLUGIN_LT_LINE@

noinst_LTLIBRARIES = libferrissopranoeashared.la
libferrissopranoeashared_la_SOURCES = libferrissopranoeashared.cpp libferrissopranoeashared.hh

endif
