#include <raylib.h>

int main() 
{
   InitWindow(300, 600, "Tetris++");                    // Init window
   SetTargetFPS(60);                                    // Set fps 

   while(WindowShouldClose() == false){                 // Game loop
        BeginDrawing();

        EndDrawing();
   }



   CloseWindow();                                       // Close Window
}