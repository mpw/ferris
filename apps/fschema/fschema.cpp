/******************************************************************************
*******************************************************************************
*******************************************************************************

    fschema command line client
    Copyright (C) 2003 Ben Martin

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

    $Id: fschema.cpp,v 1.3 2010/09/24 21:31:15 ben Exp $

*******************************************************************************
*******************************************************************************
******************************************************************************/

#include "config.h"
/*
 * return 0 for success
 * return 1 for generic error
*/

#include <Ferris.hh>
#include <popt.h>
#include <unistd.h>

using namespace std;
using namespace Ferris;

const string PROGRAM_NAME = "fschema";

void usage(poptContext optCon, int exitcode, char *error, char *addl)
{
    poptPrintUsage(optCon, stderr, 0);
    if (error) fprintf(stderr, "%s: %s0", error, addl);
    exit(exitcode);
}

/********************************************************************************/
/********************************************************************************/
/********************************************************************************/


int main( int argc, char** argv )
{
    int exit_status = 0;
    
    try
    {
        const char* Z_CSTR                 = 0;
        unsigned long Verbose              = 0;
        unsigned long ListBasicTypes       = 0;

        struct poptOption optionsTable[] =
            {
                { "verbose", 'v', POPT_ARG_NONE, &Verbose, 0,
                  "report more details than normal", "" },

                { "list-basic-types", 'l', POPT_ARG_NONE, &ListBasicTypes, 0,
                  "list the basic types that are available and some info about them", "" },

                FERRIS_POPT_OPTIONS
                POPT_AUTOHELP
                POPT_TABLEEND
            };
        poptContext optCon;

        optCon = poptGetContext(PROGRAM_NAME.c_str(), argc, (const char**)argv, optionsTable, 0);
        poptSetOtherOptionHelp(optCon, "[OPTIONS]* src1 src2 ...");

        /* Now do options processing */
        int c=-1;
        while ((c = poptGetNextOpt(optCon)) >= 0)
        {}

        if (argc < 2 )
        {
            poptPrintHelp(optCon, stderr, 0);
            exit(1);
        }

        if( ListBasicTypes )
        {
            Factory::xsdtypemap_t tm;
            Factory::makeBasicTypeMap( tm );

            for( Factory::xsdtypemap_t::iterator ti = tm.begin();
                 ti != tm.end(); ++ti )
            {
                fh_context c = ti->second;
                
                cout << endl;
                cout << "uname:" << getStrAttr( c, "uname", "" )
                     << " uuid:" << getStrAttr( c, "uuid", "" ) << endl;
                cout << "ferris enum:" << getStrAttr( c, "ferrisenum", "" )
                     << " "            << getStrAttr( c, "ferrisname", "" ) << endl;
                cout << "description:" << getStrAttr( c, "description", "" ) << endl;
            }
        }
        
    }
    catch( exception& e )
    {
        cerr << "cought error:" << e.what() << endl;
        exit(1);
    }
    return exit_status;
}


