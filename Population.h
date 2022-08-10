#ifndef POPULATION_H
#define POPULATION_H

#include "Puzzle.h"

class Population
{
public:
    virtual ~Population(){}
    // eliminates the X% least fit members of a generation
    virtual void cull(int X) = 0;
    // produces a new generation
    virtual void newGeneration() = 0;
    // return the fitness of the best Puzzle in the current generation
    virtual int bestFitness() = 0;
    // return the Puzzle with the highest fitness
    virtual Puzzle* bestIndividual() = 0;
protected:
    vector<Puzzle*> puzzles;
};

#endif // POPULATION_H

