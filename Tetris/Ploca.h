#pragma once
#include <iostream>
#include <raylib.h>

class Ploca {
public:
    int redovi = 20;
    int stupci = 10;
    int grid[20][10];   
    
    float velicinaR = 0;
    float velicinaS = 0;

    Ploca();
    void Init();
    void Print();
    void Mreza();     
};
