/**
 * @file SudokuPopulation.h
 * @author Qihou Zhang, Cuc Doan, and Kyle Huang
 * @brief SudokuPopulation concrete class (header)
 * @version 1.5
 * @date 2022-08-01
 * @copyright Copyright (c) 2022
 */

#ifndef SUDOKU_POPULATION_H
#define SUDOKU_POPULATION_H

#include "Population.h"
#include "Sudoku.h"
#include "SudokuFitness.h"
#include "SudokuFactory.h"
#include <vector>

using namespace std;

/**
 * @brief culling and mutating puzzle for each generation
 */
class SudokuPopulation: public Population {
public:
	// constructor
	SudokuPopulation(int size, Sudoku* sudoku);
	// destructor
	virtual ~SudokuPopulation();
	// eliminates the X% least fit members of a generation
	void cull(int X);
	// produces a new generation
	void newGeneration();
	// return the fitness of the best Puzzle in the current generation
	int bestFitness();
	// return the Puzzle with the highest fitness
	Puzzle* bestIndividual();
private:
	int N; // number of puzzles in a generation
	Fitness* fitness; // for evaluating fitness value/score
	PuzzleFactory* factory; // set and create puzzles
};

#endif // SUDOKU_POPULATION_H
