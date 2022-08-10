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
string Sudoku::printGrid() {
    string store {};
    for (int i = 0; i < this->grid.size(); i++) {
        if (i % 3 == 0 || i == 0 || i == this->grid.size() - 1)
            store += "+-------+-------+-------+\n";
        store += "| ";
        for (int j = 0; j < this->grid[i].size(); ++j) {
            if (j % 3 == 0 && j != 0) store += "| " + this->grid[i][j] + ' ';
            else store += this->grid[i][j] + " ";
            if (j % 3 == 0 && j != 0) cout << "| " << this->grid[i][j] << " ";
            else cout << this->grid[i][j] << " ";
        }
        store += "|\n";
        return store;
    }
}

ostream& operator << (ostream& os, Sudoku& sudoku) {
    os << sudoku.printGrid();
    return os;
}

istream& operator >> (istream& input, Sudoku& sudoku) {
    input >> std::ws >> sudoku.puzzleText;
    return input;
    // os << 
    sudoku.printGrid();
}

istream& operator >> (istream& input, Sudoku& sudoku) {
    // input >> 
}