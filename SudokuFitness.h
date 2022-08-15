/**
 * @file SudokuFitness.h
 * @author Qihou Zhang, Cuc Doan, and Kyle Huang
 * @brief SudokuFitness concrete class (header)
 * @version 0.2
 * @date 2022-08-01
 * @copyright Copyright (c) 2022
 */

#ifndef SUDOKU_FITNESS
#define SUDOKU_FITNESS

#include "Fitness.h"

/**
 * @brief contains a method that calculates the fitness score of
 *        a given puzzle
 */
class SudokuFitness: public Fitness{
public:
	// how far a Puzzle is from perfection
	int howFit(Puzzle* puzzle) override;
};

#endif // SUDOKU_FITNESS

