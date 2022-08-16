/**
 * @file SudokuFactory.h
 * @author Qihou Zhang, Cuc Doan, and Kyle Huang
 * @brief SudokuFactory concrete class (header)
 * @version 0.2
 * @date 2022-08-01
 * @copyright Copyright (c) 2022
 */

#ifndef SUDOKU_FACTORY_H
#define SUDOKU_FACTORY_H

#include "PuzzleFactory.h"
#include "SudokuOffspring.h"

class SudokuFactory: public PuzzleFactory
{
public:
	// constructor: create new offpspring
	SudokuFactory();
	// destructor: deletes offspring
	~SudokuFactory();
	// set current puzzle
	void setCurrentPuzzle(Puzzle*);
	// create puzzle
	Puzzle* createPuzzle() override;

private:
	Puzzle* puzzle; // current puzzle
	Offspring* offSpring; // current offspring
};

#endif // SUDOKU_FACTORY_H

