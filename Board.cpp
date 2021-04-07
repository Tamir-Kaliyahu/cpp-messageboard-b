#include <iostream>
#include "Board.hpp"
#include "Direction.hpp"
#include <string>
#include <stdexcept>
#include <limits.h>
using namespace std;
using namespace ariel;


namespace ariel {
   

    void Board::post(u_int row,u_int col,  enum Direction d,string str)
    {
        if(col<minCol)
        {
            minCol=col;
        }   
        if(row<minRow)
        {
            minRow=row;
        }
        if(d == Direction ::Horizontal)
        {
        if(col+str.length()-1>maxCol)
        {
            maxCol=col;
        }
        for (u_int i = 0; i < str.length(); i++)
        {
            boardMap[row][col+i]=str[i];
        }
        }
        else
        {
        if(row+str.length()-1>maxRow)
        {
            maxRow=row;
        }
        for (u_int i = 0; i < str.length(); i++)
        {
            boardMap[row+i][col]=str[i];
        }
        }
    };
    string Board::read(u_int row, u_int col, enum Direction d, u_int num)
    {
        string msg;
        for (u_int i = 0; i < num; i++)
        {
            if(d == Direction ::Horizontal)
            {
            {
            if(boardMap[row][col+i]!=0){
                msg+=boardMap[row][col+i];
            }
            else
            {
                msg+='_';
            }
            }
            }
            else
            {
            if(boardMap[row+i][col]!=0)
            {
                msg+=boardMap[row+i][col];
            }
            else
            {
                msg+='_';
            }
            }
            
        }
        
        return msg;
    };
    void Board::show()
    {
        u_int startRow = this->minRow;
        u_int finishRow = this->maxRow; 
        u_int startCol = this->minCol;
        u_int finishCol = this->maxCol;
        for (u_int i = startRow; i < finishRow; i++)
        {
            for (u_int j = startCol; j < finishCol; j++)
            {
                if(this->boardMap[i][j]!=0)
                {
                cout << boardMap[i][j] ;
                }
            }
            cout << '\n';
        }
        
        cout << "board!!!";
    };  
}

/*
int main()
    {
        Board b;
        b.post(4,4,Direction::Vertical,"hanannel");
        cout << b.read(3,4,Direction::Vertical,10) << endl;
        b.show();
        return 0;

    }
*/