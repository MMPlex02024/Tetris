#include "blok.h"

Blok::Blok()
{
	scelija = 30;
	srotacija = 0;

	boje = GetCellColors();

    kretanjeRed = 0;
    kretanjeStupac = 0;
}

void Blok::Draw() {
	std::vector<Pozicija> trenutneCelije = cells[srotacija];
	for (Pozicija item : trenutneCelije)
	{
		DrawRectangle((item.stupac + kretanjeStupac) * scelija + 1, (item.red + kretanjeRed) * scelija + 1, scelija - 1, scelija - 1, boje[id]);
		
	}
}

void Blok::Move(int red, int stupac) {
	int noviRed = kretanjeRed + red;
	int noviStupac = kretanjeStupac + stupac;

	for (Pozicija cell : cells[srotacija]) {
		int x = cell.stupac + noviStupac;
		int y = cell.red + noviRed;

		if (x < 0 || x > 9) return;   
		if (y > 19) return;
	}

	kretanjeRed = noviRed;
	kretanjeStupac = noviStupac;
}

void Blok::Rotiraj() 
{
    srotacija++;
    if(srotacija == (int)cells.size())
    {
        srotacija = 0;
    }
}

void Blok::VratiRotaciju()
{
    if (srotacija == 0) {
        srotacija = (int)cells.size() - 1;
    } else {
        srotacija--;
    }
}

std::vector<Pozicija> Blok::GetAbsoluteCells() const
{
    
    std::vector<Pozicija> tiles = cells.at(srotacija);
    std::vector<Pozicija> movedTiles;

    movedTiles.reserve(tiles.size());
    
    for (Pozicija item : tiles)
    {
        Pozicija newPos(item.red + kretanjeRed, item.stupac + kretanjeStupac);
        movedTiles.push_back(newPos);
    }
    return movedTiles;
}