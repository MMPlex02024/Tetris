#include <raylib.h>
#include "ploca.h"

int main() {
    Color pukeZelena = { 137, 162, 3, 255 };

    InitWindow(600, 900, "Tetris");
    SetTargetFPS(60);

    Ploca p;  
    p.Init(); 

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(pukeZelena);

        p.Mreza(); 

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
