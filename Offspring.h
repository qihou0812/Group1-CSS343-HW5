#ifndef OFFSPRING_H
#define OFFSPRING_H

#include "Puzzle.h"

class Offspring {
public:
	virtual Puzzle* makeOffspring(Puzzle* puzzle) = 0;
};

#endif // OFFSPRING_H
