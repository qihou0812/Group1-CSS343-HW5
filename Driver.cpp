#include <iostream>
#include <string>
#include <ctime>
using namespace std;

#include "Puzzle.h"
#include "Sudoku.h"
#include "SudokuPopulation.h"

int main(int argc, char* argv[]) {
	if (argc != 3) {
		cout << "Usage: " << argv[0] << " <population size> <maximum generations>" << endl;
		exit(0);
	}
	srand((unsigned)time(NULL));
	// get the parameters
	int populationSize = atoi(argv[1]);
	int maxGenerations = atoi(argv[2]);

	// read the puzzle
	Sudoku* puzzle = new Sudoku();
	cin >> *puzzle;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (puzzle->getValueAt(i, j) == 0) {
				puzzle->setVariableNumber(i, j);
			}
		}
	}

	// print the puzzle
	cout << *puzzle;

	// print fintness value
	Fitness* fitness = new SudokuFitness();
	puzzle->setFitness(fitness->howFit(puzzle));
	delete fitness;
	cout << "Fitness value is " << puzzle->getFitness() << endl;

	// create the first generation
	Population* population = new SudokuPopulation(populationSize, puzzle);

	// begin the GA interations
	int iteration = 0;
	for (iteration = 0; iteration < maxGenerations; iteration++) {
		population->cull(90);
		population->newGeneration();
		if (population->bestFitness() == 0) {
			// a solution has been found
			break;
		}
	}

	// print the result
	if (population->bestFitness() == 0) {
		// Found a solution
		cout << "The puzzle was solved." << endl;
		cout << "The solution is as follows." << endl;
		Sudoku* sudoku = (Sudoku*)population->bestIndividual();
		cout << *sudoku;
		cout << "The number of generations it took to solve is " << iteration << endl;
	}
	else {
		// Not found a solution
		cout << "The puzzle was not solved." << endl;
		cout << "The best puzzle found is as follows." << endl;
		Sudoku* sudoku = (Sudoku*)population->bestIndividual();
		cout << *sudoku;
		cout << "Its fitness value is " << sudoku->getFitness() << endl;
	}
	delete puzzle;
	delete population;
	return 0;
}

