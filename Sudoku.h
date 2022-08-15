/**
 * @file Sudoku.h
 * @author Qihou Zhang, Cuc Doan, and Kyle Huang
 * @brief Sudoku concrete class (header)
 * @version 0.1
 * @date 2022-07-28
 * @copyright Copyright (c) 2022
 */

#ifndef SODUKU_H
#define SODUKU_H

#include "Puzzle.h"

/**
 * @brief Sudoku object containing the puzzle and fitness value/score 
 */
class Sudoku: public Puzzle{
public:
	// default constructor
	Sudoku();
	// copy constructor
	Sudoku(Sudoku& sudoku);
	// returns if it is a variable number of mask 2D array
	bool isVariableNumber(int i, int j);
	// set variable number of mask 2D array
	void setVariableNumber(int i, int j);
	// get value of grid
	int getValueAt(int i, int j);
	// set value of grid
	void setValueAt(int i, int j, int value);
	// set fitness score
	void setFitness(int fitness) override;
	// get fitness score
	int getFitness() override;
	// print sudoku puzzle
	friend ostream& operator << (ostream& os, Sudoku& puzzle);
	// input puzzle string
	friend istream& operator >> (istream& is, Sudoku& puzzle);
private:
	bool mask[9][9]; // true means that the value is variable number
	int grid[9][9]; // the 9x9 grid
	int fitness; // the fitness level of the puzzle
};

#endif // SODUKU_H
