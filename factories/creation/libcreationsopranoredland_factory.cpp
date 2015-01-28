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

    $Id: libcreationsopranoredland_factory.cpp,v 1.2 2010/09/24 21:31:27 ben Exp $

    *******************************************************************************
    *******************************************************************************
    ******************************************************************************/

#include <FerrisCreationPlugin.hh>

using namespace std;

namespace Ferris
{
    static bool rst = appendExtraGenerateSchemaSimpleTypes(
        "<simpleType name=\"SopranoRedlandRDFRepositoryT\">"  
        "    <restriction base=\"string\">"  
        "        <enumeration value=\"RDF/XML\"/>"  
        "        <enumeration value=\"Berkeley DB\"/>"  
        "    </restriction>"  
        "</simpleType>"  
        "<simpleType name=\"SopranoRedlandRDFRepositoryListT\">"  
        "    <list itemType=\"SopranoRedlandRDFRepositoryT\"/>"  
        "    <restriction>"  
        "        <length value=\"1\"/>"  
        "    </restriction>"  
        "</simpleType>"  
        );
    
    static bool r =
    RegisterCreationModule(
        "libcreationsopranoredland.so",
        "rdf",
        "	<elementType name=\"rdf\">\n"
        "		<elementType name=\"name\" default=\"newfile.rdf\">\n"
        "			<dataTypeRef name=\"string\"/>\n"
        "		</elementType>\n"
        "       <elementType name=\"format\"> \n"
        "           <dataTypeRef name=\"SopranoRedlandRDFRepositoryListT\"/> \n"
        "		</elementType> \n"
        "		<elementType name=\"ignore-umask\" default=\"0\">\n"
        "			<dataTypeRef name=\"bool\"/>\n"
        "		</elementType>\n"
        "		<elementType name=\"user-readable\" default=\"1\">\n"
        "			<dataTypeRef name=\"bool\"/>\n"
        "		</elementType>\n"
        "		<elementType name=\"user-writable\" default=\"1\">\n"
        "			<dataTypeRef name=\"bool\"/>\n"
        "		</elementType>\n"
        "		<elementType name=\"user-executable\" default=\"0\">\n"
        "			<dataTypeRef name=\"bool\"/>\n"
        "		</elementType>\n"
        "		<elementType name=\"group-readable\" default=\"0\">\n"
        "			<dataTypeRef name=\"bool\"/>\n"
        "		</elementType>\n"
        "		<elementType name=\"group-writable\" default=\"0\">\n"
        "			<dataTypeRef name=\"bool\"/>\n"
        "		</elementType>\n"
        "		<elementType name=\"group-executable\" default=\"0\">\n"
        "			<dataTypeRef name=\"bool\"/>\n"
        "		</elementType>\n"
        "		<elementType name=\"other-readable\" default=\"0\">\n"
        "			<dataTypeRef name=\"bool\"/>\n"
        "		</elementType>\n"
        "		<elementType name=\"other-writable\" default=\"0\">\n"
        "			<dataTypeRef name=\"bool\"/>\n"
        "		</elementType>\n"
        "		<elementType name=\"other-executable\" default=\"0\">\n"
        "			<dataTypeRef name=\"bool\"/>\n"
        "		</elementType>\n"
        "		<elementType name=\"mode\" default=\"-1\">\n"
        "			<dataTypeRef name=\"int\"/>\n"
        "		</elementType>\n"
        "	</elementType>\n",
        true,
        "" );
};
