#include "Combination.h"

Combination::Combination(){
    this->colors=4;
    this->combination = new char [colors];
}

Combination::~Combination(){
    delete[] this->combination;
}

char *Combination::getCombination(){
    return this->combination;
}

void Combination::setCombination(char *combination){
    assert(combination!= nullptr);
    this->combination = combination;
}
