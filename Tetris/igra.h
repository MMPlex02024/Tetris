#pragma once
#include "ploca.h"
#include "blokovi.h"

class Igra
{
public:
	Igra();	
	Blok GetRandomBlok();
	std::vector<Blok> GetAllBlokovi();
	void MoveBlockLeft();
	void MoveBlockRight();
	void MoveBlockDown();
	int CurrentBlockRow();
	void HandleInput();
    
	Ploca ploca;
	void Draw();
private:
    std::vector<Blok> blokovi;
	Blok trenutniBlok;
	Blok sljedeciBlok;
	bool provjerabloka();
	void RotacijaBloka();
	void zakljucavanje();
	bool CelijaVani();
};

