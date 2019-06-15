#ifndef SECRETCOMBINATION_H
#define SECRETCOMBINATION_H
#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include "Combination.h"

class SecretCombination: public Combination
{
public:
    SecretCombination() = default;
    ~SecretCombination() = default;
    void generateMisteryColours ();
    void print();
};

#endif // SECRETCOMBINATION_H
