#include <raylib.h>
#include "ploca.h"
#include "blokovi.h"
#include "igra.h"

int main() {
    Color pukeZelena = { 137, 162, 3, 255 };

    InitWindow(300, 600, "Tetris");
    SetTargetFPS(60);

    Ploca p;  
    p.Init(); 

    Igra igra;

    //LBlok blok = LBlok();

    bool blokZakljucan = false;

    float timer = 0.0f;
    float timerPad = 1.0f;

    while (!WindowShouldClose()) {
       
        timer += GetFrameTime();
        
        if (timer >= timerPad && !blokZakljucan) {
            igra.MoveBlockDown();
            timer = 0;

            if (igra.CurrentBlockRow() >= 17) {
                blokZakljucan = true;
            }
        }

        if (!blokZakljucan) {
            igra.HandleInput();

            if (igra.CurrentBlockRow() >= 17) {
                blokZakljucan = true;
            }
        }

        BeginDrawing();
        ClearBackground(pukeZelena);
		igra.Draw();    
        p.Mreza(); 
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
