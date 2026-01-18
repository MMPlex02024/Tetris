#include "ploca.h"
#include <iostream>
using namespace std;
#include <vector>
#include "boje.h"



Ploca::Ploca() {
    Init();
}

void Ploca::Init() {
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < stupci; j++) {
            grid[i][j] = 0;
        }
    }
    velicinaR = (float)GetScreenWidth() / stupci;
    velicinaS = (float)GetScreenHeight() / redovi;
}

void Ploca::Print() {
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < stupci; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

void Ploca::Mreza() {
    for (int i = 0; i <= redovi; i++) {
        DrawLine(0, i * velicinaS, stupci * velicinaR, i * velicinaS, BLACK);
    }
    for (int j = 0; j <= stupci; j++) {
        DrawLine(j * velicinaR, 0, j * velicinaR, redovi * velicinaS, BLACK);
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

 const std::vector<Color>& Ploca::GetCellColors()  const
{
    
    static const std::vector<Color> colors = { siva, crvena, zuta, narancasta, ljubicasta, plava, plava };
    return colors;
}

bool Ploca::celijazauzeta(int red, int stupac)
{
    
    if (red < 0 || red >= redovi || stupac < 0 || stupac >= stupci) return true;

    return grid[red][stupac] != 0;
}

bool Ploca::redpun(int red) const
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
