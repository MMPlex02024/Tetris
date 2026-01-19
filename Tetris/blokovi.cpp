#include "blok.h"
//#include "pozicija.h"



class IBlok : public Blok
{
public:
    IBlok()
    {
        id = 1;
        cells[0] = { Pozicija(1, 0), Pozicija(1, 1), Pozicija(1, 2), Pozicija(1, 3) };
        cells[1] = { Pozicija(0, 2), Pozicija(1, 2), Pozicija(2, 2), Pozicija(3, 2) };
        cells[2] = { Pozicija(2, 0), Pozicija(2, 1), Pozicija(2, 2), Pozicija(2, 3) };
        cells[3] = { Pozicija(0, 1), Pozicija(1, 1), Pozicija(2, 1), Pozicija(3, 1) };
        Move(-1, 3);
    }
};

class OBlok : public Blok
{
public:
    OBlok()
    {
        id = 2;
        cells[0] = { Pozicija(0, 0), Pozicija(0, 1), Pozicija(1, 0), Pozicija(1, 1) };
        Move(0, 4);
    }
};

class TBlok : public Blok
{
public:
    TBlok()
    {
        id = 3;
        cells[0] = { Pozicija(0, 1), Pozicija(1, 0), Pozicija(1, 1), Pozicija(1, 2) };
        cells[1] = { Pozicija(0, 1), Pozicija(1, 1), Pozicija(1, 2), Pozicija(2, 1) };
        cells[2] = { Pozicija(1, 0), Pozicija(1, 1), Pozicija(1, 2), Pozicija(2, 1) };
        cells[3] = { Pozicija(0, 1), Pozicija(1, 0), Pozicija(1, 1), Pozicija(2, 1) };
        Move(0, 3);
    }
};

class SBlok : public Blok
{
public:
    SBlok()
    {
        id = 4;
        cells[0] = { Pozicija(0, 1), Pozicija(0, 2), Pozicija(1, 0), Pozicija(1, 1) };
        cells[1] = { Pozicija(0, 1), Pozicija(1, 1), Pozicija(1, 2), Pozicija(2, 2) };
        cells[2] = { Pozicija(1, 1), Pozicija(1, 2), Pozicija(2, 0), Pozicija(2, 1) };
        cells[3] = { Pozicija(0, 0), Pozicija(1, 0), Pozicija(1, 1), Pozicija(2, 1) };
        Move(0, 3);
    }
};

class ZBlok : public Blok
{
public:
    ZBlok()
    {
        id = 5;
        cells[0] = { Pozicija(0, 0), Pozicija(0, 1), Pozicija(1, 1), Pozicija(1, 2) };
        cells[1] = { Pozicija(0, 2), Pozicija(1, 1), Pozicija(1, 2), Pozicija(2, 1) };
        cells[2] = { Pozicija(1, 0), Pozicija(1, 1), Pozicija(2, 1), Pozicija(2, 2) };
        cells[3] = { Pozicija(0, 1), Pozicija(1, 0), Pozicija(1, 1), Pozicija(2, 0) };
        Move(0, 3);
    }
};

class JBlok : public Blok
{
public:
    JBlok()
    {
        id = 6;
        cells[0] = { Pozicija(0, 0), Pozicija(1, 0), Pozicija(1, 1), Pozicija(1, 2) };
        cells[1] = { Pozicija(0, 1), Pozicija(0, 2), Pozicija(1, 1), Pozicija(2, 1) };
        cells[2] = { Pozicija(1, 0), Pozicija(1, 1), Pozicija(1, 2), Pozicija(2, 2) };
        cells[3] = { Pozicija(0, 1), Pozicija(1, 1), Pozicija(2, 0), Pozicija(2, 1) };
        Move(0, 3);
    }
};

class LBlok : public Blok {
    public:
    LBlok() {
        id = 7; 
 
        cells[0] = { Pozicija(0, 2), Pozicija(1, 0), Pozicija(1, 1), Pozicija(1, 2) };
        cells[1] = { Pozicija(0, 1), Pozicija(1, 1), Pozicija(2, 1), Pozicija(2, 2) };
        cells[2] = { Pozicija(1, 0), Pozicija(1, 1), Pozicija(1, 2), Pozicija(2, 0) };
        cells[3] = { Pozicija(0, 0), Pozicija(0, 1), Pozicija(1, 1), Pozicija(2, 1) };
        Move(0, 3);
    }
    
};
