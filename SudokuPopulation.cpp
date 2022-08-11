#include "SudokuPopulation.h"

SudokuPopulation::SudokuPopulation() {}

void SudokuPopulation::cull()
{
	auto comp = [&](Sudoku* a, Sudoku* b) { return a->getFitness() >b->getFitness(); };
	priority_queue <Sudoku*, vector<Sudoku*>, decltype(comp)> pq(comp);
	for (auto temp : puzzleList) {
		pq.push(temp);
		if (pq.size() > population) {
			Sudoku* cur = pq.top();
			pq.pop(); // eleminate the least fitness puzzle
			delete(*cur);
		}
	}
	puzzleList.clear();
	for (int i = 0; i < population; i++) {
		puzzleList.push_back(pq[i]);
	}


}

void SudokuPopulation::newGeneration()
{
	vector<Sudoku*> new_generation;
	for (auto temp: puzzleList) {
		Sudoku* cur = dynamic_cast<Sudoku*>(temp);
		if (!cur) {
			throw std::runtime_error("This puzzle is not an Sudoku");
		}
		for (int i = 0; i < 10; i++) {
			Sudoku* new_cur = sudoku_off_spring->makeOffSpring(original_sudoku, cur);
			new_generation.push_back(new_cur);
		}
		
	}
	for (auto temp : puzzleList) {
		delete(temp);
	}
	puzzleList = new_generation;
	cull();
}

int SudokuPopulation::bestFitness()
{
	Sudoku* best_individual = dynamic_cast<Sudoku*>(this->bestIndividual());
	return best_individual->getFitness();
}

Puzzle* SudokuPopulation::bestIndividual() {
	int best_fitness = 81 * 81;
	Sudoku* best_Invidual = nullptr;
	for (int i = 0; i < population; i++) {
		Sudoku* cur = dynamic_cast<Sudoku*>(puzzleList[i]);
		if (!cur) {
			throw std::runtime_error("This puzzle is not a sudoku");
		}
		if (best_fitness < cur->getFitness()) {
			best_fitness = cur->getFitness();
			best_Invidual = cur;
		}
		return bestIndividual;
	}
}
