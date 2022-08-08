#include "Population.h"

Population::Population(int population, int generation)
: population(population), generation(generation) {
    srand(time(NULL));
    cout << "Please input a puzzle: \n";
    string input {};
    std::getline(std::cin >> std::ws, input);
}

void Population::addPuzzle(const Puzzle puzzle) {}

void Population::removePuzzle(int index, const Puzzle puzzle) {}

void Population::removeFirstPuzzle() {}

void Population::removeLastPuzzle() {}