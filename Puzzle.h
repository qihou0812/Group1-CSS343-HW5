/**
 * @file Puzzel.h
 * @author Qihou Zhang, Cuc Doan, Kyle Huang
 * @brief 
 * @version 0.1
 * @date 2022-08-02
 * @copyright Copyright (c) 2022
 */

#pragma once
#ifndef PUZZLE_H
#define PUZZLE_H

#include <iostream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <ctime>

using std::string;
using std::vector;
using std::cout;
using std::endl;

// Puzzle is an interface that only defines operator >> and <<
class Puzzle {
	virtual friend ostream& operator << (ostream& os, Sudoku& sudoku) = 0;

	virtual friend istream& operator >> (istream& os, Sudoku& sudoku) = 0;
   
};

#endif
