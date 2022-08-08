/**
 * @file Sudoku.h
 * @author Qihou Zhang, Cuc Doan, Kyle Huang
 * @brief Sudoku Puzzle Solver
 * @version 0.1
 * @date 2022-07-28
 * @copyright Copyright (c) 2022
 */

#pragma once
#ifndef SUDOKU_H
#define SUDOKU_H

#include "Puzzle.h"

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::istream;

class Sudoku : public Puzzle {
    public:
        Sudoku();

        void printGrid();

        friend ostream& operator << (ostream& os, Sudoku& sudoku);

        friend istream& operator << (istream& os, Sudoku& sudoku);
};

#endif