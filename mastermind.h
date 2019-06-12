#ifndef MASTERMIND_H
#define MASTERMIND_H
#include "proposedcombination.h"
#include "secretcombination.h"
#include <iostream>
#include <cstdlib>
#include <ctype.h>
#endif

class MasterMind{
public:
    MasterMind();
    ~MasterMind();
    void play();
    void print(int iterations);

private:
    const static int MAX_PROPOSED_COMBINATION = 10;
    SecretCombination *secretCombination;
    ProposedCombination **proposedCombination;
};
