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
private:
    vector<Point> bestMove = {Point(1,1)};
    vector<Point> goodMoves = {Point(0,0),Point(2,2),Point(2,0),Point(0,2)};
    vector<Point> worstMoves = {Point(1,0),Point(0,1),Point(1,2),Point(2,1)};

public:
    ticTacToeLogicMedium() {};
    ~ticTacToeLogicMedium() {};

    virtual void makeMove(vector<vector<char>>&);
    virtual void reset();
};
#endif