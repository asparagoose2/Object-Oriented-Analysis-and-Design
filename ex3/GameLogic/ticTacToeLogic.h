#ifndef TICTACTOELOGIC_H
#define TICTACTOELOGIC_H
#include "gameLogic.h"
#include "../TicTacToe/TicTacToe.h"
#include <stdlib.h>
#include <time.h> 

using namespace std;

class ticTacToeLogicEasy : public gameLogic 
{

public:
    ticTacToeLogicEasy() {};
    ~ticTacToeLogicEasy() {};

    virtual void makeMove(vector<vector<char>>&);
};
class ticTacToeLogicMedium : public gameLogic 
{

public:
    ticTacToeLogicMedium(){};
    ~ticTacToeLogicMedium(){};

    virtual void makeMove(vector<vector<char>>&);
};
#endif