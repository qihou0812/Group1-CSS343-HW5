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

class Sudoku {
    int population, generation;

    public:
        Sudoku(int population, int generation)
            : population(population), generation(generation) {
                srand(time(NULL));
            }
};

#endif