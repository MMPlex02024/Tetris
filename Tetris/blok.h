#pragma once
#include <vector>
#include <map>
#include "pozicija.h"
#include "boje.h"

class Blok {

public:
	
	Blok();
	void Draw ();
	void Move(int red, int stupac);
	std::vector<Pozicija> GetAbsoluteCells();
	void Rotiraj();
	void VratiRotaciju();
	int id;
	
	std::map <int, std::vector <Pozicija>> cells;

	int kretanjeRed;
	int kretanjeStupac;

private:

	std::vector<Color> boje;
	int scelija;
	int srotacija; 
};