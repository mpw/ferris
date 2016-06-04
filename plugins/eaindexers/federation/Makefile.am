
plugindir = $(libdir)/ferris/plugins/eaindexers

plugin_LTLIBRARIES = libeaindexfederation.la libeaindexfederation_factory.la
libeaindexfederation_la_SOURCES         = libeaindexfederation.cpp
libeaindexfederation_factory_la_SOURCES = libeaindexfederation_factory.cpp

INCLUDES = @CFLAGS@

libeaindexfederation_la_LDFLAGS = @GLIB_LIBS@ @LIBFERRIS_PLUGIN_LT_LINE@
libeaindexfederation_factory_la_LDFLAGS = @LIBFERRIS_PLUGIN_LT_LINE@

