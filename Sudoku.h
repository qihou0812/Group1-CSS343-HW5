#ifndef SODUKU_H
#define SODUKU_H

#include "Puzzle.h"

class Sudoku: public Puzzle{
public:
    Sudoku();
    Sudoku(Sudoku& sudoku);
    int getValueAt(int i, int j);
    void setValueAt(int i, int j, int value);
    friend ostream& operator<<(ostream& os, Sudoku& puzzle);
    friend istream& operator>>(istream& is, Sudoku& puzzle);
    void setFitness(int fitness) override;
    int getFitness() override;
    bool isVariableNumber(int i, int j);
    void setVariableNumber(int i, int j);
private:
    bool mask[9][9]; // true means that the value is variable number
    int grid[9][9]; // the 9x9 grid
    int fitness; // the fitness level of the puzzle
};

#endif // SODUKU_H
