if HAVE_LYNX

plugindir = @FERRIS_AS_TEXT_PLUGIN_DIR@

INCLUDES = @LIBDJVULIBRE_CFLAGS@ @IMLIB_CFLAGS@ @CFLAGS@

plugin_LTLIBRARIES = libastexthtml.la 
libastexthtml_la_SOURCES = libastexthtml.cpp
libastexthtml_la_LDFLAGS = @GLIB_LIBS@   \
	@LIBDJVULIBRE_LIBS@ @IMLIB_LIBS@ \
	@LIBFERRIS_ASTEXTPLUGIN_LT_LINE@

endif
