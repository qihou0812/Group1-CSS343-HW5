/**
 * @file SudokuFitness.h
 * @author Qihou Zhang, Cuc Doan, Kyle Huang
 * @brief 
 * @version 0.1
 * @date 2022-08-07
 * @copyright Copyright (c) 2022
 */

#pragma once
#ifndef SUDOKUFITNESS_H
#define SUDOKUFITNESS_H

#include <iostream>
#include "Fitness.h"
#include "Puzzle.h"

class SudokuFitness : public Fitness {

    public:
        SudokuFitness();
	int howFit(Puzzle* puzzle);
};

#endif
