
plugindir = $(libdir)/ferris/plugins/fulltextindexers

plugin_LTLIBRARIES = libftxidxqtsql.la libftxidxqtsql_factory.la
libftxidxqtsql_la_SOURCES = libftxidxqtsql.cpp QtSQLIndexHelper_private.hh
libftxidxqtsql_factory_la_SOURCES = libftxidxqtsql_factory.cpp

INCLUDES = @QTSQL_CFLAGS@ -I@COMMONSQLDBDIR@ @CFLAGS@

libftxidxqtsql_la_LDFLAGS = @GLIB_LIBS@    \
	@QTSQL_LIBS@ \
	@LIBFERRIS_PLUGIN_LT_LINE@
libftxidxqtsql_factory_la_LDFLAGS = @LIBFERRIS_PLUGIN_LT_LINE@

