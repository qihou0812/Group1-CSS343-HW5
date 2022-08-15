/**
 * @file Puzzle.h
 * @author Qihou Zhang, Cuc Doan, and Kyle Huang
 * @brief Puzzle Interface
 * @version 0.2
 * @date 2022-07-28
 * @copyright Copyright (c) 2022
 */

#ifndef PUZZLE_H
#define PUZZLE_H

#include <iostream>

using namespace std;

/**
 * @brief Interface: getters and setters of fitness
 */
class Puzzle {
public:
	virtual void setFitness(int fitness) = 0;
	virtual int getFitness() = 0;
};

#endif // PUZZLE_H
