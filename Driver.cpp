#include "Sudoku.h"

using namespace std;

int main(int arg, char **argv) {
    int population, generation {};

    try {
        if (arg == 3) {
            population = atoi(argv[1]);
            generation = atoi(argv[2]);
        } else if (arg == 4) {

        } else {
            cout << "Invalid number of arguments" << endl;
        }
    } catch (...) {
        cout << "Invalid arguments" << endl;
        exit(0);
    }

    Sudoku puzzleSolver(population, generation);
}