/**
 * @file Offspring.h
 * @author Qihou Zhang, Cuc Doan, and Kyle Huang
 * @brief Offspring Interface
 * @version 0.2
 * @date 2022-08-01
 * @copyright Copyright (c) 2022
 */

#ifndef OFFSPRING_H
#define OFFSPRING_H

#include "Puzzle.h"

/**
 * @brief Interface for creating a puzzle offspring
 */
class Offspring {
public:
	// makes sudoku offspring
	virtual Puzzle* makeOffspring(Puzzle* puzzle) = 0;
};

#endif // OFFSPRING_H
