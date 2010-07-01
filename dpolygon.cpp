#include "dpolygon.h"

DPolygon::DPolygon()
{
}

DPolygon::DPolygon(int pEcken, int pSeitenlaenge, int pHoehe = 0) : Polygon(pEcken, pSeitenlaenge)
{
    hoehe = pHoehe;
}

int DPolygon::getHoehe() const
{
    return hoehe;
}

void DPolygon::setHoehe(int pHoehe)
{
    hoehe = pHoehe;
}

int DPolygon::volumen()
{
    int x;
    int flaeche;
    flaeche = flaecheninhalt();
    x = flaeche * hoehe;
    return x;
}
