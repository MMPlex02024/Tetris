#include "blok.h"

Blok::Blok()
{
	scelija = 30;
	srotacija = 0;

	boje = GetCellColors();

    kretanjeRed = 0;
    kretanjeStupac = 0;
}

void Blok::Draw(int X, int Y) {
	std::vector<Pozicija> trenutneCelije =GetAbsoluteCells();
	
	for (Pozicija item : trenutneCelije)
	{
		DrawRectangle(item.stupac * scelija + X, item.red  * scelija + Y, scelija - 1, scelija - 1, boje[id]);
	}
}

void Blok::Move(int red, int stupac) {

	kretanjeRed += red;
	kretanjeStupac += stupac;
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

	srotacija--;
	if(srotacija == -1)
		{
		srotacija = (int)cells.size() - 1;
	}
}

std::vector<Pozicija> Blok::GetAbsoluteCells()
{
    
    std::vector<Pozicija> tiles = cells[srotacija];
    std::vector<Pozicija> movedTiles;

    for (Pozicija item : tiles)
    {
        Pozicija newPos = Pozicija(item.red + kretanjeRed, item.stupac + kretanjeStupac);
        movedTiles.push_back(newPos);
    }
    return movedTiles;
}