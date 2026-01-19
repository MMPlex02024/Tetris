#include "ploca.h"
#include <iostream>
using namespace std;
#include "boje.h"


Ploca::Ploca() {
    
	stupci = 10;
	redovi = 20;
	velc = 30;
    Init();
    boje = GetCellColors();
    
}

void Ploca::Init() {
   for (int red = 0; red < redovi; red++)
       {
        for (int stupac = 0; stupac < stupci; stupac++)
        {
            grid[red][stupac] = 0;
        }
   }
}




void Ploca::Print() {
    for (int red = 0; red < redovi; red++){
        for (int stupac = 0; stupac < stupci; stupac++){
            cout << grid[red][stupac] << " ";
        }
        cout << endl;
	}
}

void Ploca::Draw() {
    for (int red =0; red < redovi; red++){
        for (int stupac = 0; stupac < stupci; stupac++)
        {
             int vr = grid[red][stupac];
                DrawRectangle(stupac * velc + 1, red * velc + 1, velc - 1, velc - 1, boje[vr]);
            
        }
	}
}

bool Ploca::celijavani(int red, int stupac)
{
    
    if (red >= 0 && red < redovi && stupac >= 0 && stupac < stupci)
    {
        return false;
    }
    return true;
}

bool Ploca::celijazauzeta(int red, int stupac)
{
    
    if (grid[red][stupac] == 0) {
        return true;
    }
	return false;
}

bool Ploca::redpun(int red) 
{
    for (int stupac = 0; stupac < stupci; stupac++)
    {
        if (grid[red][stupac] == 0)
        {
            return false;
        }
    }
    return true;
}

void Ploca::ocistiRed(int red)
{
    for (int stupac = 0; stupac < stupci; stupac++)
    {
        grid[red][stupac] = 0;
	}
}

void Ploca::spustiRedove(int red, int redovi)
{
    
    for (int stupac = 0; stupac < stupci; stupac++)
    {
        grid[red + redovi][stupac] = grid[red][stupac];
        grid[red][stupac] = 0;
    }
}

int Ploca::ocistiredove()
{
    int ocisteniRedovi = 0;
    for (int red = redovi - 1; red >= 0; red--)
    {
        if (redpun(red))
        {
            ocistiRed(red);
            ocisteniRedovi++;
        }
        else if (ocisteniRedovi > 0)
        {
            spustiRedove(red, ocisteniRedovi);
        }
    }
    return ocisteniRedovi;
}
