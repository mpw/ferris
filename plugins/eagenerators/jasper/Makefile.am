if HAVE_LIBJASPER

plugindir = $(libdir)/ferris/plugins/eagenerators

INCLUDES = -I$(top_srcdir)/plugins/eagenerators         \
	@GTK_CFLAGS@                                    \
	@LIBJASPER_CFLAGS@	                        \
	@CFLAGS@

plugin_LTLIBRARIES = libferrisjasper.la 
libferrisjasper_la_SOURCES = libferrisjasper.cpp
libferrisjasper_la_LDFLAGS = @GTK_LIBS@  \
	@LIBJASPER_LIBS@                 \
	@LIBFERRIS_EAPLUGIN_LT_LINE@

endif
