/**
 * @file Fitness.h
 * @author Qihou Zhang, Cuc Doan, Kyle Huang
 * @brief 
 * @version 0.1
 * @date 2022-08-07
 * @copyright Copyright (c) 2022
 */

#pragma once
#ifndef FITNESS_H
#define FITNESS_H

#include <iostream>
#include "Puzzle.h"

class Fitness {
    public:
    Fitness();
	virtual int howFit(Puzzle* puzzle) = 0;
};

#endif
