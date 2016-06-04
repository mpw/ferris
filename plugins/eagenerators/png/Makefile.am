#    -I$(top_srcdir)/plugins/eagenerators



if HAVE_LIBPNG

plugindir = $(libdir)/ferris/plugins/eagenerators

INCLUDES = -I$(top_srcdir)/plugins/eagenerators @LIBPNG_CFLAGS@ @CFLAGS@

plugin_LTLIBRARIES = libferrispng.la 
libferrispng_la_SOURCES = libferrispng.cpp
libferrispng_la_LDFLAGS = @GLIB_LIBS@       \
	@LIBPNG_LIBS@                       \
	@LIBFERRIS_EAPLUGIN_LT_LINE@

endif

