#include "chess.h"
#include <sstream>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

Chess::Chess(){}

void Chess::tally(){
    string line;

        for(int i=0; i<8; i++){
            cout<<"@xxxx[{::::::::::>"<<endl; // line art of a knife (originally was a sword, but i thought it was too long)
            getline(ben, line);
                for(int y=0; y<line.length(); y++){
                    if(line.at(y)=='Q'){                //Black, Queen, 9 points
                        black_points= black_points+9;
                    }else if(line.at(y)=='R'){         //Black, Rook, 5 points
                        black_points= black_points+5;
                    }else if(line.at(y)=='B'){          //Black, Bishop, 3 points
                        black_points= black_points+3;
                    }else if(line.at(y)=='N'){          //Black, Knight, 3 points
                        black_points= black_points+3;
                    }else if(line.at(y)=='P'){          //Black, Pawn, 1 point
                        black_points=black_points+1;
                    }else if(line.at(y)=='q'){          //White, Queen, 9 points
                        white_points= white_points+9;
                    }else if(line.at(y)=='r'){          //White, Rook, 5 points
                        white_points= white_points+5;
                    }else if(line.at(y)=='b'){          //White, Bishop, 3 points
                        white_points= white_points+3;
                    }else if(line.at(y)=='n'){          //White, Knight, 3 points
                        white_points= white_points+3;
                    }else if(line.at(y)=='p'){          //White, Pawn, 1 Point
                        white_points= white_points+1;
                    }
                }

    for(int u=0; u<16; u+=2){ //THERE ARE SPACES IN THE TEXT FILE! TOOK FOREVER FOR ME TO REALIZE!
        cout<<"|"<<line.at(u);         
    }
    cout<<"|"<<endl;
                                }

    getline(ben,line); // to read that extra line (9)
    cout<<"@xxxx[{::::::::::>"<<endl; // last line art per function call
    cout<<"White Pieces: "<<white_points<<endl;
    cout<<"Black Pieces: "<<black_points<<endl<<endl; // two endlines to make it easier to see which game is which

        white_points = 0;               //preparing to read that next text board.
        black_points = 0;           

}


bool Chess::openFile(){
    ben.open("chessboards.txt");
    if(!ben.is_open()){
        cout<<" Could not open file chessboards.txt"<<endl;
        return false;
    }else{
        cout<<"chessboards.txt opened successfully"<<endl;
        return true;
    }
}

void Chess::closeFile(){
    ben.close();
}