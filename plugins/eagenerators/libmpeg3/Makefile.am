if HAVE_LIBMPEG3

plugindir = $(libdir)/ferris/plugins/eagenerators

INCLUDES = -I$(top_srcdir)/plugins/eagenerators         \
	@GTK_CFLAGS@                                    \
	@LIBMPEG3_CFLAGS@                               \
	@CFLAGS@

plugin_LTLIBRARIES = libferrismpeg3.la 
libferrismpeg3_la_SOURCES = libferrismpeg3.cpp
libferrismpeg3_la_LDFLAGS = @GTK_LIBS@       \
	@LIBMPEG3_LIBS@                      \
	@LIBFERRIS_EAPLUGIN_LT_LINE@

endif
