#ifndef SUDOKU_OFFSPRING_H
#define SUDOKU_OFFSPRING_H

#include "Offspring.h"

class SudokuOffspring: public Offspring
{
public:
	Puzzle* makeOffspring(Puzzle* puzzle) override;
};

#endif // SUDOKU_OFFSPRING_H
