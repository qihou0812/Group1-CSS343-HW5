#ifndef SUDOKU_POPULATION_H
#define SUDOKU_POPULATION_H

#include <vector>
using namespace std;
#include "Population.h"
#include "Sudoku.h"
#include "SudokuFitness.h"
#include "SudokuFactory.h"

class SudokuPopulation: public Population
{
public:
	// constructor
	SudokuPopulation(int size, Sudoku* sudoku);
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
	int N;
	Fitness* fitness;
	PuzzleFactory* factory;
};

#endif // SUDOKU_POPULATION_H
