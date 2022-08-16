/**
 * @file Fitness.h
 * @author Qihou Zhang, Cuc Doan, and Kyle Huang
 * @brief Fitness Interface
 * @version 0.2
 * @date 2022-08-01
 * @copyright Copyright (c) 2022
 */

#ifndef FITNESS_H
#define FITNESS_H

#include "Puzzle.h"

/**
 * @brief interface contains a method that calculates the fitness score of a given
 *        puzzle
 */
class Fitness {
public:
	// how far a Puzzle is from perfection
	virtual int howFit(Puzzle* puzzle) = 0;
};

#endif // FITNESS_H
