#include "combination.h"

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
    this->combination = combination;
}