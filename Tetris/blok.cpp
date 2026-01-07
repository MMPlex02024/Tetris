#include "blok.h"

Blok::Blok()
{
	scelija = 30;
	srotacija = 0;

	boje = GetCellColors();
}

void Blok::Draw() {
	std::vector<Pozicija> trenutneCelije = cells[srotacija];
	for (Pozicija item : trenutneCelije)
	{
		DrawRectangle(item.stupac * scelija + 1, item.red * scelija + 1, scelija -1, scelija -1, boje[id]);
		
	}
}
