
#include <glib.h>

#include <string>
#include <map>
#include <list>
#include <iostream>

#include <sigc++/sigc++.h>
#include <FerrisLoki/Extensions.hh>
#include <Ferris/Cache.hh>

#include <unistd.h>

using namespace Ferris;
using namespace Loki;
using namespace std;


class Animal : public CacheHandlable
{
public:
    string name;
    Animal( string name )
        :
        name( name )
        {
        }
};
#define FERRIS_SMARTPTR( ClassName, HandleName )     \
    typedef Loki::SmartPtr< ClassName,            \
        FerrisLoki::FerrisExRefCounted,           \
        Loki::DisallowConversion,                 \
        FerrisLoki::FerrisExSmartPointerChecker,  \
        FerrisLoki::FerrisExSmartPtrStorage >  HandleName;
FERRIS_SMARTPTR( Animal, fh_animal );





GMainContext* gmc;
GMainLoop* gml;
static gint qf(gpointer data)
{
    g_main_loop_quit( gml );
}
void test()
{
    Cache<string,fh_animal> c;
    c.setTimerInterval( 1000 );
    {
        fh_animal dog  = new Animal( "dog" );
        fh_animal cat  = new Animal( "cat" );
        fh_animal fish = new Animal( "fish" );
    
        c.put( "dog",  dog );
        c.put( "cat",  cat );
        c.put( "fish", fish );
    }

    fh_animal ca = c.get("dog");
    cerr << "got cache animal:" << ca->name << endl;


    gmc = g_main_context_default();
    gml = g_main_loop_new( gmc, 0 );
    g_timeout_add( 3000, GSourceFunc(qf), 0 );
    g_main_loop_run( gml );
    g_main_destroy( gml );
    
    fh_animal fa = c.get("fish");
    if( !fa )
        cerr << "couldn't get the fish from the cache!" << endl;
}


void addingmanytimes()
{
    Cache<string,fh_animal> c;
    c.setTimerInterval( 1000 );
}


int main( int argc, char** argv )
{
    test();
    return 0;
}
