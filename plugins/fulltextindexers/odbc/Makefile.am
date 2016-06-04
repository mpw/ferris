
plugindir = $(libdir)/ferris/plugins/fulltextindexers

plugin_LTLIBRARIES = libftxidxodbc.la libftxidxodbc_factory.la
libftxidxodbc_la_SOURCES = libftxidxodbc.cpp ODBCIndexHelper_private.hh
libftxidxodbc_factory_la_SOURCES = libftxidxodbc_factory.cpp

INCLUDES = @DTL_CFLAGS@ @CFLAGS@

libftxidxodbc_la_LDFLAGS = @GLIB_LIBS@    \
	@DTL_LIBS@                        \
	@LIBFERRIS_PLUGIN_LT_LINE@
libftxidxodbc_factory_la_LDFLAGS = @LIBFERRIS_PLUGIN_LT_LINE@

