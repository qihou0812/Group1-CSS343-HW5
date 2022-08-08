#include "Sudoku.h"
using namespace std;

/**
 * @brief 
 * 
 * @param population 
 * @param generation 
 */
Sudoku::Sudoku() {

}

/**
 * @brief 
 * 
 */
void Sudoku::printGrid() {
    for (int i = 0; i < this->grid.size(); i++) {
        if (i % 3 == 0 || i == 0 || i == this->grid.size() - 1)
            cout << "+-------+-------+-------+\n";
        cout << "| ";
        for (int j = 0; j < this->grid[i].size(); ++j) {
            if (j % 3 == 0 && j != 0) cout << "| " << this->grid[i][j] << " ";
            else cout << this->grid[i][j] << " ";
        }
        cout << "|\n";
    }
}

ostream& operator << (ostream& os, Sudoku& sudoku) {
    // os << 
    sudoku.printGrid();
}

istream& operator >> (istream& input, Sudoku& sudoku) {
    // input >> 
}