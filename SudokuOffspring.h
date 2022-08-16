/**
 * @file SudokuOffspring.h
 * @author Qihou Zhang, Cuc Doan, and Kyle Huang
 * @brief SudokuOffspring concrete class (header)
 * @version 0.2
 * @date 2022-08-01
 * @copyright Copyright (c) 2022
 */

#ifndef SUDOKU_OFFSPRING_H
#define SUDOKU_OFFSPRING_H

#include "Offspring.h"

/**
 * @brief a class for creating a puzzle offspring
 */
class SudokuOffspring: public Offspring {
public:
	// makes sudoku offspring
	Puzzle* makeOffspring(Puzzle* puzzle) override;
};

#endif // SUDOKU_OFFSPRING_H
