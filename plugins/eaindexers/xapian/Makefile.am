
plugindir = $(libdir)/ferris/plugins/eaindexers

plugin_LTLIBRARIES = libeaindexxapian.la libeaindexxapian_factory.la
libeaindexxapian_la_SOURCES = libeaindexxapian.cpp
libeaindexxapian_factory_la_SOURCES = libeaindexxapian_factory.cpp

INCLUDES = @XAPIAN_CFLAGS@ @CFLAGS@

libeaindexxapian_la_LDFLAGS = @GLIB_LIBS@    \
	@XAPIAN_LIBS@                      \
	@SHAREDXAPIANEA_LA@                \
	@LIBFERRIS_PLUGIN_LT_LINE@

libeaindexxapian_factory_la_LDFLAGS = @LIBFERRIS_PLUGIN_LT_LINE@

