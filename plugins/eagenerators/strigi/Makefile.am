if HAVE_STRIGI

plugindir = $(libdir)/ferris/plugins/eagenerators

INCLUDES = -I$(top_srcdir)/plugins/eagenerators @STRIGI_CFLAGS@ @CFLAGS@

plugin_LTLIBRARIES = libferrisstrigi.la 
libferrisstrigi_la_SOURCES = libferrisstrigi.cpp
libferrisstrigi_la_LDFLAGS = @GLIB_LIBS@ @STRIGI_LIBS@ \
	@LIBFERRIS_EAPLUGIN_LT_LINE@

endif
