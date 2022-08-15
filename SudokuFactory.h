#ifndef SUDOKU_FACTORY_H
#define SUDOKU_FACTORY_H

#include "PuzzleFactory.h"
#include "SudokuOffspring.h"

class SudokuFactory: public PuzzleFactory
{
public:
	SudokuFactory();
	~SudokuFactory();
	void setCurrentPuzzle(Puzzle*);
	Puzzle* createPuzzle() override;

private:
	Puzzle* puzzle;
	Offspring* offSpring;
};

#endif // SUDOKU_FACTORY_H

