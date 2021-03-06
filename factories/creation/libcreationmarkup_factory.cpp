/******************************************************************************
*******************************************************************************
*******************************************************************************

    libferris
    Copyright (C) 2002 Ben Martin

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

    $Id: libcreationmarkup_factory.cpp,v 1.2 2010/09/24 21:31:26 ben Exp $

    *******************************************************************************
    *******************************************************************************
    ******************************************************************************/

#include <FerrisCreationPlugin.hh>

using namespace std;

namespace Ferris
{
    static bool rhtml =
    RegisterCreationModule(
        "libcreationmarkup.so",
        "html",
        "   <elementType name=\"html\" mime-major=\"text\">\n"
        "		<elementType name=\"name\" default=\"new.html\">\n"
        "			<dataTypeRef name=\"string\"/>\n"
        "		</elementType>\n"
        "	</elementType>\n",
        false
        );

    static bool rxml =
    RegisterCreationModule(
        "libcreationmarkup.so",
        "xml",
        "   <elementType name=\"xml\" mime-major=\"text\">\n"
        "		<elementType name=\"name\" default=\"new.xml\">\n"
        "			<dataTypeRef name=\"string\"/>\n"
        "		</elementType>\n"
        "		<elementType name=\"root-element\" default=\"root\">\n"
        "			<dataTypeRef name=\"string\"/>\n"
        "		</elementType>\n"
        "	</elementType>\n",
        false
        );

    static bool rsgml =
    RegisterCreationModule(
        "libcreationmarkup.so",
        "sgml",
        "   <elementType name=\"sgml\" mime-major=\"text\">\n"
        "		<elementType name=\"name\" default=\"new.sgml\">\n"
        "			<dataTypeRef name=\"string\"/>\n"
        "		</elementType>\n"
        "	</elementType>\n",
        false
        );



};
