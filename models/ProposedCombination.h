#ifndef PROPOSEDCOMBINATION_H
#define PROPOSEDCOMBINATION_H
#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include "SecretCombination.h"
#include "Result.h"
#include "Combination.h"

class ProposedCombination : public Combination
{
public:
    ProposedCombination();
    ~ProposedCombination();
    void read();
    void print();
    void calculateResult(SecretCombination *secretCombination);
    bool isWinner();

private:
    SecretCombination *secretCombination;
    Result *result;
};

#endif // PROPOSEDCOMBINATION_H
