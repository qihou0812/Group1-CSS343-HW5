#ifndef PUZZLE_H
#define PUZZLE_H

#include <iostream>
using namespace std;

class Puzzle
{
public:
    virtual void setFitness(int fitness) = 0;
    virtual int getFitness() = 0;
};

#endif // PUZZLE_H
