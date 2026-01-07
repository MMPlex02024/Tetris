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

const std::vector<Color>& Ploca::GetCellColors() const
{
    static const std::vector<Color> colors = { siva, pukeZelena, crvena, zuta, narancasta, ljubicasta, plava };
    return colors;
}
