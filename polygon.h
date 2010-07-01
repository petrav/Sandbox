#ifndef POLYGON_H
#define POLYGON_H

class Polygon
{
public:
    Polygon();
    Polygon(int pEcken, int pSeitenlaenge);
    void setEcken(int ecken);
    void setSeitenlaenge(int laenge);
    int getEcken() const;
    int getSeitenlaenge() const;
    int flaecheninhalt();

private:
    int ecken;
    int seitenlaenge;
};

#endif // POLYGON_H
