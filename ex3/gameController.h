#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H
#include "game.h"
#pragma once


class gameController
{
private:
    Game* game;
public:
    gameController(Game* g) : game(g) {};
    ~gameController() {delete game;};

    void Play();
};

#endif