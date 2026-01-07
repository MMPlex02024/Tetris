#include "blok.h"
#include "pozicija.h"

class LBlok : public Blok {
	public:
	LBlok() {
		id = 6; // ID za L blok (plava)
		

		cells[0] = { Pozicija(0, 0), Pozicija(1, 0), Pozicija(2, 0), Pozicija(2, 1) };
		cells[1] = { Pozicija(1, 0), Pozicija(1, 1), Pozicija(1, 2), Pozicija(0, 2) };
		cells[2] = { Pozicija(0, 0), Pozicija(0, 1), Pozicija(1, 1), Pozicija(2, 1) };
		cells[3] = { Pozicija(0, 0), Pozicija(0, 1), Pozicija(0, 2), Pozicija(1, 0) };
	}
	
};
