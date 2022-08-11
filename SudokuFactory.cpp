#include "SudokuFactory.h"

SudokuFactory::SudokuFactory() {}

SudokuFactory::SudokuFactory(SudokuOffspring* sudokuOffSpring, Sudoku* sudoku)
{
    this->sudokuOffSpring = sudokuOffSpring;
    this->default_sudoku = sudoku;
}

Puzzle* SudokuFactory::createPuzzle()
{
    return sudokuOffSpring->makeOffSpring(default_sudoku);
    
}
