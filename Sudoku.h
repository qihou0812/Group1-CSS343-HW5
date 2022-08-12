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
#include "SudokuFitness.h"
#include <string>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::istream;

class Sudoku : public Puzzle {
private:
    vector<vector<char>> grid;
    int fitness_level;
    
public:
    Sudoku();
        
    friend ostream& operator << (ostream& os, const Sudoku& sudoku);

    friend istream& operator >> (istream& os, Sudoku& sudoku);

    void createGrid(string input);
    vector<vector<char>>& getGrid();
    int getFitness();

};

#endif

