#pragma once
#include <iostream>
#include <raylib.h>
#include <vector>

class Ploca {
public:
     
    Ploca();
    void Init();
	void Draw();
    
    bool celijavani(int red, int stupac);
	bool celijazauzeta(int red, int stupac);
    float velicinaR = 0;
    float velicinaS = 0;

   
    void Print();
    void Mreza();     
    int grid[20][10];
   
private:
    bool redpun(int red) const;       
    void ocistiRed(int red);          
    void spustiRedove(int red, int redovi);      
   
    int redovi;
	int stupci;
    int velc;
	std::vector<Color> boje;
};
