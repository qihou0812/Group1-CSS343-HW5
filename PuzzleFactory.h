/**
 * @file PuzzleFactory.h
 * @author Qihou Zhang, Cuc Doan, Kyle Huang
 * @brief 
 * @version 0.1
 * @date 2022-08-07
 * @copyright Copyright (c) 2022
 */

#ifndef PUZZLEFACTORY_H
#define PUZZLEFACTORY_H

#include <iostream>
#include "Puzzle.h"

class PuzzleFactory {
    public:
        PuzzleFactory() {};
        virtual ~PuzzleFactory() {};
	    virtual Puzzle* createPuzzle() = 0;
};

#endif
