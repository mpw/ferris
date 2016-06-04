if HAVE_MEDIAINFO

plugindir = $(libdir)/ferris/plugins/eagenerators

INCLUDES = -I$(top_srcdir)/plugins/eagenerators @MEDIAINFO_CFLAGS@ @CFLAGS@

plugin_LTLIBRARIES = libferrismediainfo.la 
libferrismediainfo_la_SOURCES = libferrismediainfo.cpp
libferrismediainfo_la_LDFLAGS = @GLIB_LIBS@ @MEDIAINFO_LIBS@ \
	@LIBFERRIS_EAPLUGIN_LT_LINE@

endif
