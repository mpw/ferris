if HAVE_FLAC

plugindir = $(libdir)/ferris/plugins/eagenerators

INCLUDES = -I$(top_srcdir)/plugins/eagenerators \
	@FLAC_CFLAGS@	                        \
	@CFLAGS@

plugin_LTLIBRARIES = libferrisflac.la 
libferrisflac_la_SOURCES = libferrisflac.cpp
libferrisflac_la_LDFLAGS = @GLIB_LIBS@ @FLAC_LIBS@ \
	@LIBFERRIS_EAPLUGIN_LT_LINE@

endif
