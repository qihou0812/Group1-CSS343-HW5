#include "SudokuFactory.h"

SudokuFactory::SudokuFactory(SudokuOffspring* sudokuOffSpring, Sudoku* sudoku)
{
    this->sudokuOffSpring = sudokuOffSpring;
    this->default_sudoku = sudoku;
}

Puzzle* SudokuFactory::createPuzzle(Puzzle* puzzle)
{
    return sudokuOffSpring->makeOffSpring(puzzle, default_sudoku);
    
}
