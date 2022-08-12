/**
 * @file SudokuPopulation.h
 * @author Qihou Zhang, Cuc Doan, Kyle Huang
 * @brief 
 * @version 0.1
 * @date 2022-08-07
 * @copyright Copyright (c) 2022
 */

#pragma once
#ifndef SUDOKUPOPULATION_H
#define SUDOKUPOPULATION_H

#include <iostream>
#include "Population.h"
#include "Sudoku.h"
#include "SudokuOffspring.h"
#include<vector>

class SudokuPopulation : public Population {
	private vector<Puzzle*> mostFitness; // store the most fit results after multiple generations.
	private Sudoku* original_sudoku;
	private SudokuOffSpring* sudoku_off_spring;
public:
    SudokuPopulation();
	void cull();// remove least fitness puzzle
	void newGeneration();
	int bestFitness();
	Puzzle* bestIndividual;
};

#endif
