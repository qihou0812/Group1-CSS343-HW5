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

void Sudoku::createGrid(string input)
{
    int pos = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++){
            grid[i][j] = input[pos];
            pos++;

        }
    }
}

vector<vector<char>>& Sudoku::getGrid()
{
    return grid;
}

int Sudoku::getFitness()
{
    SudokuFitness* sudoku_fitness;
    int res = sudoku_fitness->howFit(this);
    fitness_level = res;
    return res;
}

/**
 * @brief 
 * 
 */

ostream& operator << (ostream& os, const Sudoku& sudoku) {
    string store = "";
    for (int i = 0; i < sudoku.grid.size(); i++) {
        if (i % 3 == 0 || i == 0 || i == sudoku.grid.size() - 1)
            store += "+-------+-------+-------+\n";
        store += "| ";
        for (int j = 0; j < sudoku.grid[i].size(); ++j) {
            if (j % 3 == 0 && j != 0) store += "| " + sudoku.grid[i][j] + ' ';
            else store += sudoku.grid[i][j] + " ";
            if (j % 3 == 0 && j != 0) cout << "| " << sudoku.grid[i][j] << " ";
            else cout << sudoku.grid[i][j] << " ";
        }
        store += "|\n";
    }
    os << store;
    return os;
}

istream& operator >> (istream& input, Sudoku& sudoku) {
    string in;
    input >> in;
    sudoku.createGrid(in);
    return input;
}
int main(){
    return 0;
}
