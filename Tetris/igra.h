#pragma once
#include "ploca.h"
#include "blokovi.cpp"

class Igra
{
public:
	Igra();	
	Blok GetRandomBlok();
	std::vector<Blok> GetAllBlokovi();
	
	void MoveBlockDown();
	int CurrentBlockRow();
	void HandleInput();
    
	Ploca ploca;
	void Draw();

private:
    std::vector<Blok> blokovi;
	Blok trenutniBlok;
	Blok sljedeciBlok;
	void MoveBlockLeft();
	void MoveBlockRight();
	bool provjerabloka();
	void RotacijaBloka();
	void zakljucavanje();
	bool CelijaVani();
};

