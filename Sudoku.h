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

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <sstream>

using std::vector;
using std::cout;
using std::endl;
using std::string;

class Sudoku {
    int population, generation;
    vector<vector<char>> grid;

    public:
        Sudoku(const int& population = 0, const int& generation = 0);

        void fillGrid(const string& input);

        void printGrid();

        // void printGrid(const vector<vector<char>>& puzzle);
};

#endif