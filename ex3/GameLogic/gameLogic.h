#include "../point.h"

enum DIFFICULTY {EASY, MEDIUM};


class gameLogic
{
public:
    gameLogic();
    ~gameLogic();

    virtual void makeMove(vector<vector<char>>&) = 0;
};
