#pragma once
#include <vector>
#include <map>
#include "pozicija.h"
#include  "boje.h"

class Blok {

public:
	Blok();
	void Draw ();
	void Move(int red, int stupac);
	int id;
	std::map <int, std::vector <Pozicija>> cells;
    std::vector<Color> boje;

	int kretanjeRed;
	int kretanjeStupac;

private:
	int scelija;
	int srotacija; 
};