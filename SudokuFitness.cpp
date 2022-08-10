#include "SudokuFitness.h"
#include "Sudoku.h"

// compute how far a Puzzle is from perfection
int SudokuFitness::howFit(Puzzle* puzzle) {
    Sudoku* sudoku = (Sudoku*)puzzle;
    int fitness = 0;
    // compute how many duplicate entries there are in each row, column and 3-by-3 block
    for (int i = 0; i < 9; i++) {
        // each row
        int counter[10] = { 0 };
        counter[0] = 1;
        for (int j = 0; j < 9; j++) {
            int value = sudoku->getValueAt(i, j);
            if (counter[value] > 0) {
                fitness++;
            }
            counter[value]++;
        }
        // each column
        int mCounter[10] = { 0 };
        mCounter[0] = 1;
        for (int j = 0; j < 9; j++) {
            int value = sudoku->getValueAt(j, i);
            if (mCounter[value] > 0) {
                fitness++;
            }
            mCounter[value]++;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // each block
            int counter[10] = { 0 };
            counter[0] = 1;
            int mi = 3 * i;
            int mj = 3 * j;
            for (int ci = 0; ci < 3; ci++) {
                for (int cj = 0; cj < 3; cj++) {
                    int ii = mi + ci;
                    int jj = mj + cj;
                    int value = sudoku->getValueAt(ii, jj);
                    if (counter[value] > 0) {
                        fitness++;
                    }
                    counter[value]++;
                }
            }
        }
    }
    return fitness;
}

