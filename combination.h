#ifndef COMBINATION_H
#define COMBINATION_H
#include <iostream>
#include <assert.h>
#include "color.h"

class Combination
{
public:
    Combination();
    ~Combination();
    char* getCombination();
    void setCombination(char *combination);

protected:
    char *combination;
    int colors;
    Color *color;
};

#endif // COMBINATION_H
