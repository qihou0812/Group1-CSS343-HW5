#ifndef SUDOKU_FITNESS
#define SUDOKU_FITNESS

#include "Fitness.h"

class SudokuFitness: public Fitness{
public:
	int howFit(Puzzle* puzzle) override;
};

#endif // SUDOKU_FITNESS

