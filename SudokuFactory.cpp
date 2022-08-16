/**
 * @file SudokuFactory.cpp
 * @author Qihou Zhang, Cuc Doan, and Kyle Huang
 * @brief SudokuFactory concrete class (implementation)
 * @version 0.2
 * @date 2022-08-01
 * @copyright Copyright (c) 2022
 */

#include "SudokuFactory.h"

SudokuFactory::SudokuFactory()
	:puzzle(nullptr) {
	offSpring = new SudokuOffspring();
}

SudokuFactory::~SudokuFactory() {
	delete offSpring;
}

// return a new PUzzle
Puzzle* SudokuFactory::createPuzzle() {
	return offSpring->makeOffspring(puzzle);
}

void SudokuFactory::setCurrentPuzzle(Puzzle* puzzle) {
	this->puzzle = puzzle;
}