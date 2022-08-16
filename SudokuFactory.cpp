/**
 * @file SudokuFactory.cpp
 * @author Qihou Zhang, Cuc Doan, and Kyle Huang
 * @brief SudokuFactory concrete class (implementation)
 * @version 0.2
 * @date 2022-08-01
 * @copyright Copyright (c) 2022
 */

#include "SudokuFactory.h"

// constructor: create offspring
SudokuFactory::SudokuFactory()
	:puzzle(nullptr) {
	offSpring = new SudokuOffspring();
}

// destructor: deletes offspring
SudokuFactory::~SudokuFactory() {
	delete offSpring;
}

// return a new Puzzle
Puzzle* SudokuFactory::createPuzzle() {
	return offSpring->makeOffspring(puzzle);
}

// set current puzzle
void SudokuFactory::setCurrentPuzzle(Puzzle* puzzle) {
	this->puzzle = puzzle;
}
