/**
 * @file Offspring.h
 * @author Qihou Zhang, Cuc Doan, Kyle Huang
 * @brief 
 * @version 0.1
 * @date 2022-08-07
 * @copyright Copyright (c) 2022
 */

#pragma once
#ifndef OFFSPRING_H
#define OFFSPRING_H

#include <iostream>
#include "Puzzle.h"

class Offspring {
public:
	Offspring() {};
	virtual Puzzle* makeOffSpring(Puzzle* puzzle) = 0;
};

#endif
