
plugindir = $(libdir)/ferris/plugins/fulltextindexers

plugin_LTLIBRARIES = libftxidxclucene.la libftxidxclucene_factory.la
libftxidxclucene_la_SOURCES = libftxidxclucene.cpp 
libftxidxclucene_factory_la_SOURCES = libftxidxclucene_factory.cpp 

INCLUDES = @CLUCENE_CFLAGS@ @CFLAGS@

libftxidxclucene_la_LDFLAGS = @GLIB_LIBS@    \
	@CLUCENE_LIBS@                       \
	@LIBFERRIS_PLUGIN_LT_LINE@
libftxidxclucene_factory_la_LDFLAGS = @LIBFERRIS_PLUGIN_LT_LINE@

