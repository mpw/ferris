if HAVE_MAGICK

plugindir = $(libdir)/ferris/plugins/eagenerators

INCLUDES = -I$(top_srcdir)/plugins/eagenerators @MAGICK_CFLAGS@ @CFLAGS@

plugin_LTLIBRARIES = libmagick.la 
libmagick_la_SOURCES = libmagick.cpp
libmagick_la_LDFLAGS = @GLIB_LIBS@       \
	@MAGICK_LIBS@                    \
	@LIBFERRIS_EAPLUGIN_LT_LINE@

endif
