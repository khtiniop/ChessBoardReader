#include <iostream>
#include <fstream>
#include "chess.h"
using namespace std;

int main() {
    Chess chess;
    chess.openFile();

    chess.tally();
    chess.tally();
    chess.tally();
    chess.tally();
    
    chess.closeFile();


    return 0;
}