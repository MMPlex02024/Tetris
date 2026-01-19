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

    InitWindow(600, 600, "Tetris");
    SetTargetFPS(60);

	Font font = LoadFont("resources/monogram.ttf");

    Igra igra = Igra();

    

    while (!WindowShouldClose()) {

        

        igra.HandleInput();
        if (dogodiloSe(0.2))
        {
			igra.MoveBlockDown();
        }
       
        BeginDrawing();
        ClearBackground(pukeZelena);
        DrawTextEx(font, "Rezultat", {365, 15}, 38, 2, WHITE);
        DrawTextEx(font, "Sljedeci", { 365, 175 }, 38, 2, WHITE);
       if(igra.gameOver)
       {
        
           DrawTextEx(font, "GAME OVER", { 320, 450 }, 38, 2, WHITE);
       }
       DrawRectangleRounded({ 350, 55, 170, 60 }, 0.1f, 10, DARKGRAY);
	   char rezstring[20];
	   
       sprintf(rezstring, "%d", igra.rez);
       Vector2 dimenzije = MeasureTextEx(font, rezstring, 38, 2);
       
		
        DrawTextEx(font, rezstring, { 320 + (210 - dimenzije.x)/2, 68}, 38, 2, WHITE);
        DrawRectangleRounded({ 350, 215, 170, 180 }, 0.1f, 10, DARKGRAY);
		igra.Draw();  

        
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
