#include "polygon.h"


Polygon::Polygon()
{
    ecken = 0;
    seitenlaenge = 0;
}

Polygon::Polygon(int pEcken, int pSeitenlaenge)
{
    ecken = pEcken;
    seitenlaenge = pSeitenlaenge;
}

void Polygon::setEcken(int ecken)
{
    ecken = ecken;
}

void Polygon::setSeitenlaenge(int pSeitenlaenge)
{
    seitenlaenge = pSeitenlaenge;
}

int Polygon::getEcken() const
{
    return ecken;
}

int Polygon::getSeitenlaenge() const
{
    return seitenlaenge;
}

int Polygon::flaecheninhalt()
{
    int x;
    x = ecken * seitenlaenge;
    return x;
}
