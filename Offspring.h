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
    protected:
        

    public:
        Offspring();
	Puzzle* makeOffSpring(Puzzle* puzzle);
};

#endif
