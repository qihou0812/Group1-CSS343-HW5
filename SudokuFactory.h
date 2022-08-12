/**
 * @file SudokuFactory.h
 * @author Qihou Zhang, Cuc Doan, Kyle Huang
 * @brief 
 * @version 0.1
 * @date 2022-08-07
 * @copyright Copyright (c) 2022
 */

#pragma once
#ifndef SUDOKUFACTORY_H
#define SUDOKUFACTORY_H

#include <iostream>
#include "PuzzleFactory.h"
#include "Offspring.h"
#include "Sudoku.h"
#include <string>
class SudokuFactory : public PuzzleFactory {

    public:
        SudokuFactory(SudokuOffspring* sudokuOffSpring, Sudoku* sudoku);
        Puzzle* createPuzzle();
    private:
	SudokuOffspring* sudokuOffSpring;
    Sudoku* default_sudoku;
};

#endif
