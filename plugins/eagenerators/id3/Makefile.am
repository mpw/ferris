if HAVE_ID3


plugindir = $(libdir)/ferris/plugins/eagenerators

INCLUDES = -I$(top_srcdir)/plugins/eagenerators @ID3_CFLAGS@ @CFLAGS@

plugin_LTLIBRARIES = libferrisid3.la 
libferrisid3_la_SOURCES = libferrisid3.cpp
libferrisid3_la_LDFLAGS = @GLIB_LIBS@       \
	@ID3_LIBS@                          \
	@LIBFERRIS_EAPLUGIN_LT_LINE@

endif
