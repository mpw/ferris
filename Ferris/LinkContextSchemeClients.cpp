/******************************************************************************
*******************************************************************************
*******************************************************************************

    libferris
    Copyright (C) 2001 Ben Martin

    libferris is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libferris is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with libferris.  If not, see <http://www.gnu.org/licenses/>.

    For more details see the COPYING file in the root directory of this
    distribution.

    $Id: LinkContextSchemeClients.cpp,v 1.15 2011/09/12 21:31:32 ben Exp $

*******************************************************************************
*******************************************************************************
******************************************************************************/
#include <config.h>

#include <LinkContextSchemeClients.hh>
#include "config.h"

namespace Ferris
{
    namespace Private
    {
        const std::string link_ctx_applications_name = "applications";
//        const std::string link_ctx_applications_url  = "~/.ferris/apps.db";
        const std::string link_ctx_applications_url  = "apps://";
        // typedef Loki::SingletonHolder<
        //     LinkContextSchemeVFS_RootContextDropper<
        //         link_ctx_applications_name, link_ctx_applications_url >,
        //     Loki::CreateUsingNew, Loki::NoDestroy >
        // link_ctx_applications_singleton;

        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
                link_ctx_applications_name, link_ctx_applications_url > >
        link_ctx_applications_singleton;

        
        static RootContextDropper& applicationsd = link_ctx_applications_singleton::instance();

        const std::string link_ctx_apps_name = "apps";
        const std::string link_ctx_apps_url  = getDotFerrisPath() + "apps.db";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_apps_name, link_ctx_apps_url > >  link_ctx_apps_singleton;
        static RootContextDropper& appsd = link_ctx_apps_singleton::instance();

        
        const std::string link_ctx_events_name = "events";
        const std::string link_ctx_events_url  = getDotFerrisPath() + "eventbind.db";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_events_name, link_ctx_events_url > >  link_ctx_events_singleton;
         static RootContextDropper& eventsd = link_ctx_events_singleton::instance();

        
        const std::string link_ctx_icons_name = "icons";
        const std::string link_ctx_icons_url  = AUTOTOOLS_CONFIG_DATADIR + "/ferris/icons";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_icons_name, link_ctx_icons_url > >  link_ctx_icons_singleton;
         static RootContextDropper& iconsd = link_ctx_icons_singleton::instance();

        const std::string link_ctx_gnomeicons_name = "gnomeicons";
        const std::string link_ctx_gnomeicons_url  = "/usr/share/pixmaps";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_gnomeicons_name, link_ctx_gnomeicons_url > >  link_ctx_gnomeicons_singleton;
         static RootContextDropper& gnomeiconsd = link_ctx_gnomeicons_singleton::instance();
        
        
        const std::string link_ctx_mime_name = "mime";
        const std::string link_ctx_mime_url  = getDotFerrisPath() + "mimebind.db";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_mime_name, link_ctx_mime_url > >  link_ctx_mime_singleton;
         static RootContextDropper& mimed = link_ctx_mime_singleton::instance();

        const std::string link_ctx_fileclip_name = "file-clipboard";
        const std::string link_ctx_fileclip_url  = getDotFerrisPath() + "file-clipboard.db";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_fileclip_name, link_ctx_fileclip_url > >  link_ctx_fileclip_singleton;
         static RootContextDropper& fileclipd = link_ctx_fileclip_singleton::instance();


//         const std::string link_ctx_news_name = "news";
//         const std::string link_ctx_news_url  = "~/.fnews/feeds";
//         typedef FerrisSingletonAlways<
//             LinkContextSchemeVFS_RootContextDropper<
//             link_ctx_news_name, link_ctx_news_url > > link_ctx_news_singleton;
//          static RootContextDropper& newsd = link_ctx_news_singleton::instance();

        const std::string link_ctx_bookmarks_name = "bookmarks";
        const std::string link_ctx_bookmarks_url  = getDotFerrisPath() + "bookmarks.db";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_bookmarks_name, link_ctx_bookmarks_url > >  link_ctx_bookmarks_singleton;
         static RootContextDropper& bookmarksd = link_ctx_bookmarks_singleton::instance();

        const std::string link_ctx_eaq_name = "eaq";
        const std::string link_ctx_eaq_url  = "eaquery://filter/";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_eaq_name, link_ctx_eaq_url > >  link_ctx_eaq_singleton;
         static RootContextDropper& eaqd = link_ctx_eaq_singleton::instance();

        const std::string link_ctx_ftxq_name = "ftxq";
        const std::string link_ctx_ftxq_url  = "fulltextquery://";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_ftxq_name, link_ctx_ftxq_url > >  link_ctx_ftxq_singleton;
         static RootContextDropper& ftxqd = link_ctx_ftxq_singleton::instance();
        

        
        const std::string link_ctx_rdf_name = "myrdf";
        const std::string link_ctx_rdf_url  = getDotFerrisPath() + "rdfdb/myrdf-sp2o.db";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_rdf_name, link_ctx_rdf_url > >  link_ctx_rdf_singleton;
         static RootContextDropper& rdfd = link_ctx_rdf_singleton::instance();
        static bool ctx_rdf_b = ImplementationDetail::appendToStaticLinkedRootContextNames("myrdf");


//         const std::string link_ctx_schema_name = "schema";
//         const std::string link_ctx_schema_url  = getDotFerrisPath() + "schema.xml";
//         typedef FerrisSingletonAlways<
//             LinkContextSchemeVFS_RootContextDropper<
//             link_ctx_schema_name, link_ctx_schema_url > > link_ctx_schema_singleton;
//          static RootContextDropper& schemad = link_ctx_schema_singleton::instance();

        const std::string link_ctx_camera_name = "camera";
        const std::string link_ctx_camera_url  = "gphoto:/";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_camera_name, link_ctx_camera_url > >  link_ctx_camera_singleton;
         static RootContextDropper& camerad = link_ctx_camera_singleton::instance();

        const std::string link_ctx_pg_name = "pg";
        const std::string link_ctx_pg_url  = "postgresql:/";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_pg_name, link_ctx_pg_url > >  link_ctx_pg_singleton;
         static RootContextDropper& pgd = link_ctx_pg_singleton::instance();

        const std::string link_ctx_flickr_name = "flickr";
        const std::string link_ctx_flickr_url  = "webphotos://flickr";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_flickr_name, link_ctx_flickr_url > >  link_ctx_flickr_singleton;
         static RootContextDropper& flickrd = link_ctx_flickr_singleton::instance();

        const std::string link_ctx_23hq_name = "23hq";
        const std::string link_ctx_23hq_url  = "webphotos://23hq";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_23hq_name, link_ctx_23hq_url > >  link_ctx_23hq_singleton;
         static RootContextDropper& _23hqd = link_ctx_23hq_singleton::instance();

        const std::string link_ctx_pixelpipe_name = "pixelpipe";
        const std::string link_ctx_pixelpipe_url  = "webphotos://pixelpipe";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_pixelpipe_name, link_ctx_pixelpipe_url > >  link_ctx_pixelpipe_singleton;
         static RootContextDropper& _pixelpiped = link_ctx_pixelpipe_singleton::instance();
        
        const std::string link_ctx_eaindexes_name = "eaindexes";
        const std::string link_ctx_eaindexes_url  = getDotFerrisPath() + "ea-indexes";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_eaindexes_name, link_ctx_eaindexes_url > >  link_ctx_eaindexes_singleton;
         static RootContextDropper& _eaindexesd = link_ctx_eaindexes_singleton::instance();

        const std::string link_ctx_ftxindexes_name = "ftxindexes";
        const std::string link_ctx_ftxindexes_url  = getDotFerrisPath() + "full-text-indexes";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_ftxindexes_name, link_ctx_ftxindexes_url > >  link_ctx_ftxindexes_singleton;
         static RootContextDropper& _ftxindexesd = link_ctx_ftxindexes_singleton::instance();

        /////////////
         // QtSQL
         ////////
         
        const std::string link_ctx_qtsqlmysql_name = "mysql";
        const std::string link_ctx_qtsqlmysql_url  = "qtsql://mysql";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_qtsqlmysql_name, link_ctx_qtsqlmysql_url > >  link_ctx_qtsqlmysql_singleton;
         static RootContextDropper& _qtsqlmysqld = link_ctx_qtsqlmysql_singleton::instance();

#ifndef HAVE_LIBPQXX
        
        const std::string link_ctx_qtsqlpostgresql_name = "postgresql";
#else
        const std::string link_ctx_qtsqlpostgresql_name = "qt-postgresql";
#endif
        const std::string link_ctx_qtsqlpostgresql_url  = "qtsql://postgresql";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_qtsqlpostgresql_name, link_ctx_qtsqlpostgresql_url > >  link_ctx_qtsqlpostgresql_singleton;
         static RootContextDropper& _qtsqlpostgresqld = link_ctx_qtsqlpostgresql_singleton::instance();

        ///////////////////

        const std::string link_ctx_youtube_name = "youtube";
        const std::string link_ctx_youtube_url  = "google://youtube";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_youtube_name, link_ctx_youtube_url > >  link_ctx_youtube_singleton;
         static RootContextDropper& _youtubed = link_ctx_youtube_singleton::instance();


        const std::string link_ctx_sane_name = "scanner";
        const std::string link_ctx_sane_url  = "sane://";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_sane_name, link_ctx_sane_url > >  link_ctx_sane_singleton;
         static RootContextDropper& _saned = link_ctx_sane_singleton::instance();


        const std::string link_ctx_pulseaudio_name = "pa";
        const std::string link_ctx_pulseaudio_url  = "pulseaudio://";
        typedef FerrisSingletonAlways<
            LinkContextSchemeVFS_RootContextDropper<
            link_ctx_pulseaudio_name, link_ctx_pulseaudio_url > >  link_ctx_pulseaudio_singleton;
         static RootContextDropper& _pulseaudiod = link_ctx_pulseaudio_singleton::instance();


        
    };
};


