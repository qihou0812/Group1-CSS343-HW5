/**
 * @file Puzzel.h
 * @author Qihou Zhang, Cuc Doan, Kyle Huang
 * @brief 
 * @version 0.1
 * @date 2022-08-02
 * @copyright Copyright (c) 2022
 */

#ifndef PUZZLE_H
#define PUZZLE_H

#include <iostream>
#include <string>
using namespace std;

// Puzzle is an interface that only defines operator >> and <<
class Puzzle {
public:
	Puzzle() {};
	virtual ~Puzzle() {};
	int fitnessLevel;
	friend std::ostream& operator << (std::ostream& os, const Puzzle& puzzle);

	friend std::istream& operator >> (std::istream& is, Puzzle& puzzle);

   
};

#endif
