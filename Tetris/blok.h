#pragma once
#include <vector>
#include <map>
#include "pozicija.h"
#include  "boje.h"

class Blok {

public:
	Blok();
	void Draw ();
	int id;
	std::map <int, std::vector <Pozicija>> cells;
    std::vector<Color> boje;

private:
	int scelija;
	int srotacija; 


};