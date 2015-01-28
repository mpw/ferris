/******************************************************************************
*******************************************************************************
*******************************************************************************

    libferris
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

    $Id: libferriskde3metadata_factory.cpp,v 1.3 2010/09/24 21:31:28 ben Exp $

    *******************************************************************************
    *******************************************************************************
    ******************************************************************************/

#include <FerrisEAPlugin.hh>

using namespace std;

namespace Ferris
{
    /**
     */
    namespace 
    {
        static bool r = RegisterEAGeneratorModule(
            Factory::MakeAlwaysTrueMatcher(),
            AUTOTOOLS_CONFIG_LIBDIR + "/ferris/plugins/eagenerators/libferriskde3metadata.so",
            "kde3_metadata",
            false, // dyn
            true, // state
            AttributeCreator::CREATE_PRI_LOW );
    };
};
