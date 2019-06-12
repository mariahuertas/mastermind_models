#ifndef PROPOSEDCOMBINATION_H
#define PROPOSEDCOMBINATION_H
#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include "secretcombination.h"
#include "result.h"
#include "combination.h"

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
