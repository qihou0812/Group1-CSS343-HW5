/**
 * @file SudokuPopulation.h
 * @author Qihou Zhang, Cuc Doan, Kyle Huang
 * @brief 
 * @version 0.1
 * @date 2022-08-07
 * @copyright Copyright (c) 2022
 */

#ifndef SUDOKUPOPULATION_H
#define SUDOKUPOPULATION_H

#include <iostream>
#include "Population.h"
#include "Sudoku.h"
#include "SudokuOffspring.h"
#include<vector>

class SudokuPopulation : public Population {
private:
	Sudoku* original_sudoku;
	SudokuOffspring* sudoku_off_spring;
public:
	SudokuPopulation(int population, int generation) : Population(population, generation) {}
	void cull();// remove least fitness puzzle
	void newGeneration();
	int bestFitness();
	Puzzle* bestIndividual();
};

#endif
