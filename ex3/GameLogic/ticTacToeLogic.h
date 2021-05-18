#include "gameLogic.h"

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