/**
 * @file SudokuPopulation.cpp
 * @author Qihou Zhang, Cuc Doan, and Kyle Huang
 * @brief SudokuPopulation concrete class (implementation)
 * @version 5.9
 * @date 2022-08-01
 * @copyright Copyright (c) 2022
 */

#include "SudokuPopulation.h"
#include <algorithm>

// constructor
SudokuPopulation::SudokuPopulation(int size, Sudoku* sudoku)
	: N(size) {
	// create Fitness object
	fitness = new SudokuFitness();
	// create PuzzleFactory object
	factory = new SudokuFactory();

	// create initial puzzles
	for (int k = 0; k < size; k++) {
		Sudoku* puzzle = new Sudoku(*sudoku);
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (puzzle->getValueAt(i, j) == 0) {
					puzzle->setValueAt(i, j, rand() % 9 + 1);
				}
			}
		}
		// compute fitness of the puzzle
		int mFitness = fitness->howFit(puzzle);
		puzzle->setFitness(mFitness);
		puzzles.push_back(puzzle);
	}
	
}

SudokuPopulation::~SudokuPopulation() {
	for(size_t i = 0; i < puzzles.size(); i++){
		delete puzzles[i];
	}
	delete fitness;
	delete factory;
}

// eliminates the X% least fit members of a generation
void SudokuPopulation::cull(int X) {
	// sort the puzzles by fitness
	sort(puzzles.begin(), puzzles.end(), [](Puzzle* a, Puzzle* b){
		return a->getFitness() > b->getFitness();
	});

	// make elimination
	int N = puzzles.size();
	int number = (int)(puzzles.size() * (100 - X) / 100.0);
	while (puzzles.size() > number) {
		Puzzle* puzzle = *puzzles.begin();
		puzzles.erase(puzzles.begin());
		delete puzzle;
	}
}

// produces a new generation
void SudokuPopulation::newGeneration() {
	
	// make the size stay contant
	int mSize = puzzles.size();
	while (puzzles.size() < N) {
		Puzzle* tmp = puzzles[rand() % mSize];
		Puzzle* puzzle = new Sudoku(*((Sudoku*)tmp));
		puzzles.push_back(puzzle);
	}

	// generate next generation
	for (size_t i = 0; i < puzzles.size(); i++) {
		factory->setCurrentPuzzle(puzzles[i]);
		Puzzle* puzzle = factory->createPuzzle();
		delete puzzles[i];
		puzzles[i] = puzzle;

		// compute fitness of the puzzle
		int mFitness = fitness->howFit(puzzles[i]);
		puzzles[i]->setFitness(mFitness);
	}
}

// return the fitness of the best Puzzle in the current generation
int SudokuPopulation::bestFitness() {
	Puzzle* puzzle = bestIndividual();
	return puzzle->getFitness();
}

// return the Puzzle with the highest fitness
Puzzle* SudokuPopulation::bestIndividual() {
	Puzzle* bestPuzzle = nullptr;
	for (Puzzle* puzzle : puzzles) {
		if (!bestPuzzle || puzzle->getFitness() < bestPuzzle->getFitness()) {
			bestPuzzle = puzzle;
		}
	}
	return bestPuzzle;
}
