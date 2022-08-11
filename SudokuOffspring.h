/**
 * @file SudokuOffspring.h
 * @author Qihou Zhang, Cuc Doan, Kyle Huang
 * @brief 
 * @version 0.1
 * @date 2022-08-07
 * @copyright Copyright (c) 2022
 */

#pragma once
#ifndef SUDOKUOFFSPRING_H
#define SUDOKUOFFSPRING_H

#include <iostream>
#include "Puzzle.h"
#include "Offspring.h"
#include "Sudoku.h"

class SudokuOffspring : public Offspring {
    private:

    public:
        SudokuOffspring();
	    Puzzle* makeOffSpring (Puzzle* puzzle, Puzzle* original_puzzle);
};

#endif
