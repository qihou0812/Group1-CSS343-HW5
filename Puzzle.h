/**
 * @file Puzzel.h
 * @author Qihou Zhang, Cuc Doan, Kyle Huang
 * @brief 
 * @version 0.1
 * @date 2022-08-02
 * @copyright Copyright (c) 2022
 */

#pragma once
#ifndef PUZZLE_H
#define PUZZLE_H

#include <iostream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <ctime>

using std::string;
using std::vector;
using std::cout;
using std::endl;

class Puzzle {
    protected:
        string puzzleText {};
        vector<vector<char>> grid {};

    public:
        Puzzle(const string& input = "");

        Puzzle(const vector<vector<char>>& puzzle);

        virtual void setPuzzle(const string& input);

        virtual void setPuzzle(const vector<vector<char>>& puzzle);

        virtual string getPuzzle() const;

        virtual vector<vector<char>> getPuzzle();

        virtual void fillGrid();
};

#endif