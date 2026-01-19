#pragma once
#include <vector>
#include <map>
#include "pozicija.h"
#include "boje.h"

class Blok {

public:
	
	Blok();
	void Draw (int X, int Y);
	void Move(int red, int stupac);
	std::vector<Pozicija> GetAbsoluteCells();
	void Rotiraj();
	void VratiRotaciju();
	int id;
	
	std::map <int, std::vector <Pozicija>> cells;


private:

	std::vector<Color> boje;
	int scelija;
	int srotacija; 
	int kretanjeRed;
	int kretanjeStupac;
};