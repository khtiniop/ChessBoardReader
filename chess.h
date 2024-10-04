#ifndef CHESS_H
#define CHESS_H
#include <fstream>
#include <string>
#include <ostream>
using namespace std;

class Chess{
    public: 
        Chess();
        
        int white_points = 0;
        int black_points = 0; 
        ifstream ben; 

        void tally();
        bool openFile();
        void closeFile();


};


#endif