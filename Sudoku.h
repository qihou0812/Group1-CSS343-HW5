/**
 * @file Sudoku.h
 * @author Qihou Zhang, Cuc Doan, Kyle Huang
 * @brief Sudoku Puzzle Solver
 * @version 0.1
 * @date 2022-07-28
 * @copyright Copyright (c) 2022
 */

#ifndef SUDOKU_H
#define SUDOKU_H

#include "Puzzle.h"
#include "SudokuFitness.h"
#include <string>
#include <vector>
using namespace std;

class Sudoku : public Puzzle {
private:
    vector<vector<char>> grid;
    int fitness_level;
    
public:
    Sudoku();
        
    friend ostream& operator << (ostream& os, const Sudoku& puzzle);

    friend istream& operator >> (istream& os, Sudoku& puzzle);
    void createGrid(string input);
    vector<vector<char>>& getGrid();
    int getFitness();

};

#endif

