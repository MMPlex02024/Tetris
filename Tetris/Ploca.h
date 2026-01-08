#pragma once
#include <iostream>
#include <raylib.h>
#include <vector>

class Ploca {
public:
    int redovi = 20;
    int stupci = 10;
    int grid[20][10];   
    
    bool celijavani(int red, int stupac);

    float velicinaR = 0;
    float velicinaS = 0;

    Ploca();
    void Init();
    void Print();
    void Mreza();     
    const std::vector<Color>& GetCellColors() const;
};
