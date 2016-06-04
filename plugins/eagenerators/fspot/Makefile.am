if HAVE_FSPOT

plugindir = $(libdir)/ferris/plugins/eagenerators

INCLUDES = -I$(top_srcdir)/plugins/eagenerators @FSPOT_CFLAGS@ @CFLAGS@

plugin_LTLIBRARIES = libferrisfspot.la 
libferrisfspot_la_SOURCES = libferrisfspot.cpp
libferrisfspot_la_LDFLAGS = @GLIB_LIBS@ @FSPOT_LIBS@ \
	@LIBFERRIS_EAPLUGIN_LT_LINE@

endif
