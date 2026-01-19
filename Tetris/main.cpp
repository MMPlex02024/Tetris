#include <raylib.h>

#include "igra.h"
 
#include <iostream>
#include "boje.h"

double zadnjiupdate = 0;

bool dogodiloSe(double interval) {
       
    double sada = GetTime();
    
    if (sada - zadnjiupdate >= interval){
        zadnjiupdate = sada;
        return true;
    }
	return false;
}

int main() {
   Color pukeZelena = { 137, 162, 3, 255 };

    InitWindow(300, 620, "Tetris");
    SetTargetFPS(60);

      

    Igra igra = Igra();

    

    while (!WindowShouldClose()) {

        

        igra.HandleInput();
        if (dogodiloSe(0.2))
        {
			igra.MoveBlockDown();
        }
       
        BeginDrawing();
        ClearBackground(pukeZelena);
		igra.Draw();  

        //p.Mreza(); 
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
