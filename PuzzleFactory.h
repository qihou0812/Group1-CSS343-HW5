/**
 * @file PuzzleFactory.h
 * @author Qihou Zhang, Cuc Doan, and Kyle Huang
 * @brief PuzzleFactory Interface
 * @version 1.8
 * @date 2022-08-01
 * @copyright Copyright (c) 2022
 */

#ifndef PUZZLE_FACTORY_H
#define PUZZLE_FACTORY_H

#include "Puzzle.h"

/**
 * @brief sets and creates puzzles
 */
class PuzzleFactory {
public:
	// destructor
	virtual ~PuzzleFactory() {}
	// set current puzzle
	virtual void setCurrentPuzzle(Puzzle*) = 0;
	// create a new puzzle
	virtual Puzzle* createPuzzle() = 0;
};

#endif // PUZZLE_FACTORY_H
