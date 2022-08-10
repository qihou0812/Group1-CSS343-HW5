#ifndef PUZZLE_FACTORY_H
#define PUZZLE_FACTORY_H

#include "Puzzle.h"

class PuzzleFactory {
public:
    virtual ~PuzzleFactory(){}
    virtual void setCurrentPuzzle(Puzzle*) = 0;
    virtual Puzzle* createPuzzle() = 0;
};

#endif // PUZZLE_FACTORY_H
