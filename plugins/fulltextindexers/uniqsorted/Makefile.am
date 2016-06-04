
plugindir = $(libdir)/ferris/plugins/fulltextindexers

plugin_LTLIBRARIES = libftxidxuniqsorted.la libftxidxuniqsorted_factory.la
libftxidxuniqsorted_la_SOURCES = libftxidxuniqsorted.cpp
libftxidxuniqsorted_factory_la_SOURCES = libftxidxuniqsorted_factory.cpp

INCLUDES = @CFLAGS@

libftxidxuniqsorted_la_LDFLAGS         = @LIBFERRIS_PLUGIN_LT_LINE@
libftxidxuniqsorted_factory_la_LDFLAGS = @LIBFERRIS_PLUGIN_LT_LINE@

