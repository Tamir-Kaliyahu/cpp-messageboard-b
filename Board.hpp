#include <iostream>
#include <string>
#include <map>
#include "Direction.hpp"
#include <limits.h>
using namespace std;

namespace ariel{

    class Board{
    
        public:
         u_int maxRow;
            u_int maxCol;
            u_int minRow;
            u_int minCol;
            map<unsigned int,map<unsigned int,char>> boardMap;

            Board(){
         u_int maxRow=0;
        u_int maxCol=0;
        u_int minRow=UINT_MAX;
        u_int minCol=UINT_MAX;
            };
            ~Board(){};
           
            void post(u_int row,u_int col, enum Direction d,string str);
            string read(u_int row,u_int col, enum Direction d, unsigned int num);
            void show();
            // void initBoard(u_int  rows, u_int columns);
            // void cleanBoard();
    };
};