/**
 * @file Population.h
 * @author Qihou Zhang, Cuc Doan, Kyle Huang
 * @brief 
 * @version 0.1
 * @date 2022-08-07
 * @copyright Copyright (c) 2022
 */

#pragma once
#ifndef POPULATION_H
#define POPULATION_H

#include <iostream>
#include "Puzzle.h"

#include <deque>

using std::deque;

class Population {
    protected:
        int population, generation;
        vector<Puzzle*> puzzleList;

    public:
    Population(int population, int generation);
	void cull (int X);// remove least fitness puzzle
	void newGeneration();
	int bestFitness();
	Puzzle* bestIndividual();
};

#endif
