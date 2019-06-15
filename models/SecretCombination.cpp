#include "SecretCombination.h"

void SecretCombination::generateMisteryColours (){
    char *enumClassArray = new char[this->colors];
    char *secretCombination = new char[this->colors];
    color->values(enumClassArray);
    int j=0;
    for (int i = 0; i < this->colors; i++){
        j=color->randomEnum();
        secretCombination[i] = enumClassArray[j];
    }
    setCombination(secretCombination);
}

void SecretCombination::print(){
    char *secretCombination;
    secretCombination = getCombination();
    std::cout<< "Mistery colours: ";
    for (int i=0; i<4; i++){
        std::cout <<  secretCombination[i] <<" ";
    }
    std::cout<<std::endl;
}
