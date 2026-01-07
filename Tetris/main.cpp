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

    bool blokZakljucan = false;

    float timer = 0.0f;
    float timerPad = 1.0f;

    while (!WindowShouldClose()) {
       
        timer += GetFrameTime();

        if (timer >= timerPad && !blokZakljucan) {
            blok.Move(1, 0);
            timer = 0;

            if (blok.kretanjeRed >= 17) {
                blokZakljucan = true;
            }
        }

        if (!blokZakljucan) {
            if (IsKeyPressed(KEY_LEFT)) {
                blok.Move(0, -1);
            }
            if (IsKeyPressed(KEY_RIGHT)) {
                blok.Move(0, 1);
            }
            if (IsKeyPressed(KEY_DOWN)) {
                blok.Move(1, 0);
            }

            if (blok.kretanjeRed >= 17) {
                blokZakljucan = true;
            }
        }

        BeginDrawing();
        ClearBackground(pukeZelena);

        p.Mreza(); 
		blok.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
