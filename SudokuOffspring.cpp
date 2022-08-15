/**
 * @file SudokuOffspring.cpp
 * @author Qihou Zhang, Cuc Doan, and Kyle Huang
 * @brief SudokuOffspring concrete class (implementation)
 * @version 2.2
 * @date 2022-08-01
 * @copyright Copyright (c) 2022
 */

#include "SudokuOffspring.h"
#include "Sudoku.h"

/**
 * @brief implementation of creating puzzle offspring
 * PRE: requires a puzzle
 * POST: returns a mutated puzzle
 * @param puzzle puzzle
 * @return Puzzle* 
 */
Puzzle* SudokuOffspring::makeOffspring(Puzzle* puzzle) {
	Sudoku* sudoku = new Sudoku(*(Sudoku*)puzzle);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (!sudoku->isVariableNumber(i, j)) continue;
			if (rand() % 100 <= 2) {
				// make mutation
				int oldValue = sudoku->getValueAt(i, j);
				int newValue = rand() % 9 + 1;
				while (oldValue == newValue) {
					newValue = rand() % 9 + 1;
				}
				sudoku->setValueAt(i, j, newValue);
			}
		}
	}
	return sudoku;
}
