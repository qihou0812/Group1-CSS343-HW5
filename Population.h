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
#include "Fitness.h"
#include <deque>

using std::deque;

class Population {
    protected:
        int population, generation;
        vector<Puzzle*> puzzleList;
        int best_fitness;

    public:
    Population(int population, int generation);
	virtual void cull() = 0;// remove least fitness puzzle
	virtual void newGeneration() = 0;
	virtual int bestFitness() = 0;
	virtual Puzzle* bestIndividual() = 0;

};

#endif
