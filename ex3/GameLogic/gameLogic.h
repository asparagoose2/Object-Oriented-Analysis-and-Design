#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include "../point.h"
#include <vector>
#pragma once
#define NUM_OF_DIFFICULTIES 2
enum DIFFICULTY {EASY=1, MEDIUM};



class gameLogic
{
public:
    gameLogic(){};
    ~gameLogic(){};

    virtual void makeMove(std::vector<std::vector<char>>&) = 0;
    virtual void reset() {};
};

#endif