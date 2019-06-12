#include "Mastermind.h"

MasterMind::MasterMind(){
    this->secretCombination = new SecretCombination();
    this->proposedCombination = new ProposedCombination *[MAX_PROPOSED_COMBINATION];
}

MasterMind::~MasterMind(){
    delete this->secretCombination;
    delete this->proposedCombination;
}

void MasterMind::play(){
    int iterations = 0;
    this->secretCombination->generateMisteryColours();
    std::cout << "Bienvenido al mastermind. Por cada ronda, ingresa 4 colores"<< std::endl;
    do{
        this->proposedCombination[iterations] = new ProposedCombination();
        this->proposedCombination[iterations]->read();
        this->proposedCombination[iterations]->calculateResult(secretCombination);
        print(iterations);
        if (this->proposedCombination[iterations]->isWinner()){
            std::cout << "ERES GANADOR" <<std::endl;
        }
        iterations++;
    } while (!this->proposedCombination[iterations-1]->isWinner() && iterations < MAX_PROPOSED_COMBINATION);
}

void MasterMind:: print(int iterations){
    secretCombination->print();
    for (int i=0; i<=iterations; i++){
        this->proposedCombination[i]->print();
    }
}
