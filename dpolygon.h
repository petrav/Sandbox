#ifndef DPOLYGON_H
#define DPOLYGON_H

#include "polygon.h"

class DPolygon : public Polygon
{
public:
    DPolygon();
    DPolygon(int pEcken, int pSeitenlaenge, int pHoehe);
    int volumen();
    int getHoehe() const;
    void setHoehe(int pHoehe);

private:
    int hoehe;
};

#endif // DPOLYGON_H
