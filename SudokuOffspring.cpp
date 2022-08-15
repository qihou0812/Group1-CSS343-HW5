#include "SudokuOffspring.h"
#include "Sudoku.h"

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
