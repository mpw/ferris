
plugindir = $(libdir)/ferris/plugins/eaindexers

INCLUDES = @CLUCENE_CFLAGS@ @CFLAGS@

plugin_LTLIBRARIES = libeaindexclucene.la libeaindexclucene_factory.la
libeaindexclucene_la_SOURCES = libeaindexclucene.cpp
libeaindexclucene_factory_la_SOURCES = libeaindexclucene_factory.cpp
libeaindexclucene_la_LDFLAGS = @GLIB_LIBS@    \
	@CLUCENE_LIBS@                      \
	@LIBFERRIS_PLUGIN_LT_LINE@

libeaindexclucene_factory_la_LDFLAGS = @LIBFERRIS_PLUGIN_LT_LINE@

