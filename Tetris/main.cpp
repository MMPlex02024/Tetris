#include <raylib.h>
#include "ploca.h"
#include "blokovi.cpp"


int main() {
    Color pukeZelena = { 137, 162, 3, 255 };

    InitWindow(300, 600, "Tetris");
    SetTargetFPS(60);

    Ploca p;  
    p.Init(); 

	LBlok blok = LBlok();
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(pukeZelena);

        p.Mreza(); 
		blok.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
