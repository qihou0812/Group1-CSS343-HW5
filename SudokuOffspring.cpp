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
    

    return res;
}
