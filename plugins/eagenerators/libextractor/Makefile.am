if HAVE_LIBEXTRACTOR

plugindir = $(libdir)/ferris/plugins/eagenerators

INCLUDES = -I$(top_srcdir)/plugins/eagenerators @LIBEXTRACTOR_CFLAGS@ @CFLAGS@

plugin_LTLIBRARIES = libferrisextractor.la 
libferrisextractor_la_SOURCES = libferrisextractor.cpp
libferrisextractor_la_LDFLAGS = @GLIB_LIBS@ @LIBEXTRACTOR_LIBS@        \
	@LIBFERRIS_EAPLUGIN_LT_LINE@

endif
