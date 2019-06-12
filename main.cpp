#include <iostream>
#include "mastermind.h"
using namespace std;

int main(){
    srand (time(nullptr));
    MasterMind master;
    master.play();
    return 0;
}
