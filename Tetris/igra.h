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
	bool gameOver;
	Ploca ploca;
	void Draw();
	int rez;

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
	void Reset();
	void rezp(int linijeobrisane, int spustenblok );
};

