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