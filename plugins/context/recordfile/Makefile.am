plugindir = $(libdir)/ferris/plugins/context

plugin_LTLIBRARIES = libferrisrecordfile.la libferrisrecordfile_factory.la
libferrisrecordfile_factory_la_SOURCES = libferrisrecordfile_factory.cpp
libferrisrecordfile_factory_la_LIBADD  = @LIBFERRIS_PLUGIN_FACTORY_LIBADD@
libferrisrecordfile_factory_la_LDFLAGS = @LIBFERRIS_PLUGIN_LT_LINE@
libferrisrecordfile_la_SOURCES         = libferrisrecordfile.cpp

INCLUDES = -I$(top_srcdir)/plugins/context -I@COMMONSQLDBDIR@ @CFLAGS@

libferrisrecordfile_la_LDFLAGS = @LIBFERRIS_PLUGIN_LT_LINE@

