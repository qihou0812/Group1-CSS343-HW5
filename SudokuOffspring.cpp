#include "SudokuOffspring.h"

SudokuOffspring::SudokuOffspring() {}

Puzzle* SudokuOffspring::makeOffSpring(Puzzle* puzzle, Puzzle* original_puzzle)
{
    Sudoku* res = dynamic_cast<Sudoku*>(puzzle);
    if (!res) {
        throw std::runtime_error("This puzzle is not a Sudoku");
    }
    Sudoku* original_soduku = dynamic_cast<Sudoku*>(original_puzzle);
    if (!original_soduku) {
        throw std::runtime_error("The original puzzle is not a Sudoku");
    }
<<<<<<< HEAD
    vector<vector<char>> grid = res->getGrid();
    vector<vector<char>> original_grid = original_soduku->getGrid();
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (original_grid[i][j] == '0') {
                int chance = (std::rand() % 100 + 1) % 20; //there are 5% that chance = 0
                if (chance == 0) {
                    grid[i][j] = '0' + (std::rand() % 9 + 1); // random from 1 to 9
                }
            }
        }
    }
=======
    
>>>>>>> cdbfccbd430732e56f812e24f0a2c29fdbf68ec6

    return res;
}
