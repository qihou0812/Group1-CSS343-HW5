#include "SudokuFitness.h"

SudokuFitness::SudokuFitness() {}

int SudokuFitness::howFit(Puzzle* puzzle)
{
    Sudoku* sudoku = dynamic_cast<Sudoku*>(puzzle);
    if (!sudoku) {
        throw std::runtime_error("this puzzle is not a sudoku");
    }
    vector<vector<char>> grid = sudoku->getGrid();
    int res = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (grid[i][j] == 0) {
                throw std::runtime_error("Unpopulated grid");
            }
            for (int u = 0; u < 9; u++) {
                for (int v = 0; v < 9; v++) {
                    if (i == u && j == v) {
                        continue;
                    }
                    if (grid[i][j] != grid[u][v]) {
                        continue;
                    }
                    if (i == u //same row
                        || j == v //same column
                        || (i / 3 == u / 3 && j / 3 == v / 3)) // same 3*3 area
                    {
                        res += 1;
                    }
                }
            }
        }
    }
    return res;
}
