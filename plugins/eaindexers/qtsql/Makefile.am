
plugindir = $(libdir)/ferris/plugins/eaindexers

plugin_LTLIBRARIES = libeaindexqtsql.la libeaindexqtsql_factory.la
libeaindexqtsql_la_SOURCES = libeaindexqtsql.cpp
libeaindexqtsql_factory_la_SOURCES = libeaindexqtsql_factory.cpp

INCLUDES = @QTSQL_CFLAGS@ -I@COMMONSQLDBDIR@ @CFLAGS@

libeaindexqtsql_la_LDFLAGS = @GLIB_LIBS@ @QTSQL_LIBS@ 
libeaindexqtsql_factory_la_LDFLAGS = @LIBFERRIS_PLUGIN_LT_LINE@

