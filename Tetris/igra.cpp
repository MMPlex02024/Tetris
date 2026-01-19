#include "igra.h"
//#include <random>
#include <iostream>
#include "ploca.h"
//#include <raylib.h>

Igra::Igra()
{
	ploca = Ploca();
	blokovi = GetAllBlokovi();
	trenutniBlok = GetRandomBlok();
	sljedeciBlok = GetRandomBlok();
	gameOver = false;
}

Blok Igra::GetRandomBlok()
{
	if(blokovi.empty()) {
		blokovi = GetAllBlokovi();
	} 

	int randomIndex = rand() % blokovi.size();
	Blok blok = blokovi[randomIndex];
	blokovi.erase(blokovi.begin() + randomIndex);
	
	return blok;
}

std::vector<Blok> Igra::GetAllBlokovi()  
{
	return { IBlok(), JBlok(), OBlok(), SBlok(), TBlok(), ZBlok(), LBlok() }; 

}

void Igra:: Draw() {
	ploca.Draw();
	trenutniBlok.Draw();
}

void Igra::MoveBlockLeft()
{
    if(!gameOver){
    trenutniBlok.Move(0, -1);
    if (CelijaVani() || provjerabloka() == false) {
        trenutniBlok.Move(0, 1);
     }
   }
}

void Igra::MoveBlockRight()
{
    if (!gameOver){
    trenutniBlok.Move(0, 1);
    if (CelijaVani() || provjerabloka() == false) {
        trenutniBlok.Move(0, -1);
         }
   }
}

void Igra::MoveBlockDown()
{   if(!gameOver){
    trenutniBlok.Move(1, 0);
    if (CelijaVani() || provjerabloka() == false) {
        trenutniBlok.Move(-1, 0);
        zakljucavanje();
        }
    }
}
/*
int Igra::CurrentBlockRow()
{
    return trenutniBlok.kretanjeRed;
}
*/
void Igra::HandleInput()
{
    int keyPressed = GetKeyPressed();
    if (gameOver && keyPressed != 0) {
		gameOver = false;
        Reset();
    }
    switch (keyPressed)
    {
        case KEY_LEFT:
            MoveBlockLeft();
            break;
        case KEY_RIGHT:
            MoveBlockRight();
            break;
        case KEY_DOWN:
            MoveBlockDown();
            break;
        case KEY_UP:
            RotacijaBloka();
            break;
        default:
            break;
    }
}

void Igra::RotacijaBloka()
{
    if (!gameOver){
    trenutniBlok.Rotiraj();
    if (CelijaVani() || provjerabloka() == false) {
        trenutniBlok.VratiRotaciju();
		
        }
    }
}

bool Igra::CelijaVani()
{
    std::vector<Pozicija> tiles = trenutniBlok.GetAbsoluteCells();
   
    for ( Pozicija item : tiles) {
        if (ploca.celijavani(item.red, item.stupac)) {
            return true;
        }
    }
    return false;
}


void Igra::zakljucavanje()
{
    std::vector<Pozicija> tiles = trenutniBlok.GetAbsoluteCells();
    
    for (Pozicija item : tiles) {
       
        ploca.grid[item.red][item.stupac] = trenutniBlok.id;
    }
   
    trenutniBlok = sljedeciBlok;
    if (provjerabloka() == false)
    {
		gameOver = true;
    }
    sljedeciBlok = GetRandomBlok();
	ploca.ocistiredove();
}

bool Igra::provjerabloka()
{
    std::vector<Pozicija> tiles = trenutniBlok.GetAbsoluteCells();
    
    for (Pozicija item : tiles) 
        {
        if (ploca.celijazauzeta(item.red, item.stupac) == false) 
        {
            return false;
        }
    }
    return true;
}

void Igra::Reset()
{
	ploca.Init();
	blokovi = GetAllBlokovi();
    trenutniBlok = GetRandomBlok();
	sljedeciBlok = GetRandomBlok();
}