
plugindir = $(libdir)/ferris/plugins/context

plugin_LTLIBRARIES = libsocket.la libsocket_factory.la
libsocket_factory_la_SOURCES = libsocket_factory.cpp
libsocket_factory_la_LIBADD  = @LIBFERRIS_PLUGIN_FACTORY_LIBADD@
libsocket_factory_la_LDFLAGS = @LIBFERRIS_PLUGIN_LT_LINE@
libsocket_la_SOURCES         = libsocket.cpp

INCLUDES = -I$(top_srcdir)/plugins/context \
	@SOCKETPP_CFLAGS@                  \
	@CFLAGS@

libsocket_la_LDFLAGS = @GLIB_LIBS@ @SOCKETPP_LIBS@ \
	@LIBFERRIS_PLUGIN_LT_LINE@


