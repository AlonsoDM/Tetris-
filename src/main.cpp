#include <raylib.h>
#include "grid.h"

int main() 
{
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "Tetris++");                    // Init window
    SetTargetFPS(60);                                    // Set fps 

    Grid grid = Grid();
    grid.grid[0][0] = 1;
    grid.grid[3][5] = 4;
    grid.grid[17][8] = 7;
    grid.Print();

    while(WindowShouldClose() == false){                 // Game loop
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();

        EndDrawing();
    }



    CloseWindow();                                       // Close Window
}