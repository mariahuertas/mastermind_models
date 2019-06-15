#include "ProposedCombination.h"

ProposedCombination::ProposedCombination():Combination(){
    this->secretCombination = new SecretCombination();
    this->result = new Result();
}

ProposedCombination::~ProposedCombination(){
    delete this->secretCombination;
    delete this->result;
}

void ProposedCombination::read(){
    char value = ' ';
        char *combination;
        combination = new char [4];
        for(int i=0; i<4; i++){
            do{
                std::cout << "Inserta el color "<< i+1 <<": ";
                std::cin >> value;
                value = toupper(value);
            } while(this->color->isColor(value));
        combination[i] = value;
        }
    setCombination(combination);
}

void ProposedCombination::print(){
    char *proposedCombination;
    proposedCombination = getCombination();
    std::cout<< "Proposed colours: ";
    for (int i=0; i<colors; i++){
        std::cout << "|" << proposedCombination[i] << "|";
    }
    std::cout<<"/"<<"Black: "<<this->result->getBlackToken()<<" White: "<< this->result->getWhiteToken();
    std::cout<<std::endl;
}

void ProposedCombination::calculateResult(SecretCombination *secretCombination){
    assert(secretCombination!= nullptr);
    char *combination = secretCombination->getCombination();
    for (int i=0; i<this->colors; i++){
    if (combination[i]==this->combination[i])
        this->result->incrementBlackToken();

    else{
        for (int j=0; j<this->colors; j++)
            if (combination[i]==this->combination[j] &&
                    (combination[j]!=this->combination[j]))
                this->result->incrementWhiteToken();
        }
    }
}

bool ProposedCombination:: isWinner(){
    return (this->result->getBlackToken()) == this->colors;
}
