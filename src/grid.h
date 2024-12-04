#pragma once                                // Header file is only included once in a compilation unit to avoid duplicate definitions
#include <vector>
#include <raylib.h>

class Grid{
    public:                                 // Public methods
        Grid();
        void Initialize();
        void Print();
        void Draw();
        int grid[20][10];
    private:                                // Private methods
        std::vector<Color> GetCellColors();
        int numRows;
        int numCols;
        int cellSize;
        std::vector<Color> colors;
};