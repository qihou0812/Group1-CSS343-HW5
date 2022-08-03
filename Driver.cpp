#include "Sudoku.h"

using namespace std;

int main(int arg, char **argv) {
    int population {}, generation {};

    try {
        if (arg != 3)
            throw ("Invalid arguments, please try again:\n");
        population = atoi(argv[1]);
        generation = atoi(argv[2]);
    } catch (char const* error) {
        cout << error;
        cout << argv[0] << " <population> " << " <generation> " << endl;
        exit(0);
    }

    Sudoku puzzleSolver(population, generation);
}