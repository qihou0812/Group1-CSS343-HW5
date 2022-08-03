#include "Sudoku.h"
using namespace std;

Sudoku::Sudoku(const int& population, const int& generation)
: population(population), generation(generation) {
    srand(time(NULL));
}