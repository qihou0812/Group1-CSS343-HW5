#ifndef FITNESS_H
#define FITNESS_H

#include "Puzzle.h"

class Fitness {
public:
	// how far a Puzzle is from perfection
	virtual int howFit(Puzzle* puzzle) = 0;
};

#endif // FITNESS_H
