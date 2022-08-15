/**
 * @file Sudoku.cpp
 * @author Qihou Zhang, Cuc Doan, and Kyle Huang
 * @brief Sudoku concrete class (implementation)
 * @version 3.5
 * @date 2022-07-28
 * @copyright Copyright (c) 2022
 */

#include "Sudoku.h"
#include <ctype.h>

// default constructor
Sudoku::Sudoku()
	:fitness(0) {
	// initiate the grid
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			grid[i][j] = 0;
			mask[i][j] = false;
		}
	}
}
// copy constructor
Sudoku::Sudoku(Sudoku& sudoku) {
	setFitness(sudoku.getFitness());
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			grid[i][j] = sudoku.getValueAt(i, j);
			mask[i][j] = sudoku.isVariableNumber(i, j);
		}
	}
}

// returns if it is a variable number of mask 2D array
bool Sudoku::isVariableNumber(int i, int j) {
	return mask[i][j];
}

// set variable number of mask 2D array
void Sudoku::setVariableNumber(int i, int j) {
	mask[i][j] = true;
}

// get value of grid
int Sudoku::getValueAt(int i, int j) {
	return grid[i][j];
}

// set value of grid
void Sudoku::setValueAt(int i, int j, int value) {
	grid[i][j] = value;
}

// get fitness score
int Sudoku::getFitness() {
	return fitness;
}

// set fitness score
void Sudoku::setFitness(int fitness) {
	this->fitness = fitness;
}

// output sudoku to standard output
ostream& operator<<(ostream& os, Sudoku& puzzle) {
	int value;
	
	for (int i = 0; i < 9; i++) {
		if (i % 3 == 0) {
			os << "+-------+-------+-------+" << endl;
		}
		for (int j = 0; j < 9; j++) {
			if (j % 3 == 0) {
				os << "| ";
			}
			value = puzzle.getValueAt(i, j);
			os << value << " ";
		}
		os << "|" << endl;
		
	}
	os << "+-------+-------+-------+" << endl;
	return os;
}

// read the sudoku from standard input
istream& operator>>(istream& is, Sudoku& puzzle) {
	int value;
	char ch;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			is.get(ch);
			while (!isdigit(ch)) {
				is.get(ch);
			}
			value = ch - '0';
			puzzle.setValueAt(i, j, value);
		}
	}
	return is;
}