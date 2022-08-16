/**
 * @file Population.h
 * @author Qihou Zhang, Cuc Doan, and Kyle Huang
 * @brief Population Interface
 * @version 0.3
 * @date 2022-07-28
 * @copyright Copyright (c) 2022
 */

#ifndef POPULATION_H
#define POPULATION_H

#include "Puzzle.h"
#include <vector>

/**
 * @brief Interface for culling and mutating puzzle for each generation
 */
class Population {
public:
	// destructor
	virtual ~Population(){}
	// eliminates the X% least fit members of a generation
	virtual void cull(int X) = 0;
	// produces a new generation
	virtual void newGeneration() = 0;
	// return the fitness of the best Puzzle in the current generation
	virtual int bestFitness() = 0;
	// return the Puzzle with the highest fitness
	virtual Puzzle* bestIndividual() = 0;
protected:
	vector<Puzzle*> puzzles; // contains the puzzles for cull and mutation
};

#endif // POPULATION_H

