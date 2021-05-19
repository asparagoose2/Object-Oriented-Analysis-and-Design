#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include "../point.h"
#include <vector>
#pragma once

enum DIFFICULTY {EASY, MEDIUM};


class gameLogic
{
public:
    gameLogic(){};
    ~gameLogic(){};

    virtual void makeMove(std::vector<std::vector<char>>&) = 0;
};

#endif