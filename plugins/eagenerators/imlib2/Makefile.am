if HAVE_IMLIB2

plugindir = $(libdir)/ferris/plugins/eagenerators

INCLUDES = -I$(top_srcdir)/plugins/eagenerators @IMLIB_CFLAGS@ @CFLAGS@

plugin_LTLIBRARIES = libimlib2.la 
libimlib2_la_SOURCES = libimlib2.cpp
libimlib2_la_LDFLAGS = @GLIB_LIBS@       \
	@IMLIB_LIBS@                     \
	@LIBFERRIS_EAPLUGIN_LT_LINE@

endif
