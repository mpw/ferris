if HAVE_LIBDJVULIBRE

plugindir = $(libdir)/ferris/plugins/eagenerators

INCLUDES = -I$(top_srcdir)/plugins/eagenerators         \
	@LIBDJVULIBRE_CFLAGS@	                        \
	@IMLIB_CFLAGS@                                  \
	@CFLAGS@

plugin_LTLIBRARIES = libferrisdjvulibre.la 
libferrisdjvulibre_la_SOURCES = libferrisdjvulibre.cpp
libferrisdjvulibre_la_LDFLAGS = @GLIB_LIBS@ \
	@LIBDJVULIBRE_LIBS@                 \
	@IMLIB_LIBS@                        \
	@LIBFERRIS_EAPLUGIN_LT_LINE@

endif
