#include <iostream>
#include <ostream>
#include "polygon.h"
#include "dpolygon.h"
#include "essentials.h"

using namespace std;

int main(int argc, char *argv[])
{
    Polygon gamma(5, 2);
    DPolygon beta(5, 25, 5);
    Polygon *pointer;
    DPolygon *dPoly = new DPolygon(95, 125, 25);
    pointer = &gamma;
    const char strg[] = {'T', 'e', 's', 't', '!', '\0'};
    const char strg29[] ="Test, no 2";

    cout << gamma.getEcken() << endl;
    cout << gamma.flaecheninhalt() << endl;
    cout << beta.volumen() << endl;
    pointer->setSeitenlaenge(52);
    cout << pointer->getSeitenlaenge() << endl;
    cout << gamma.getSeitenlaenge() << endl;
    cout << dPoly->volumen() << endl;
    cout << strg << " " << strg29 << endl;
    writeln(strg29);
    delete dPoly;
    delete pointer;

}

/**void deleter( Polygon *args[])
{
    for(int x=0; x args[x] != sizeof(args); ++x)
    {
        delete args[x];
    }
}*/
