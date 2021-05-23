#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>
#include <vector>
#include "point.h"
// #include "CLI_utils.h"
#include "gameUI/gameUI.h"
#include "GameLogic/gameLogic.h"

#pragma once

enum PLAYER {PLAYER_ONE, PLAYER_TWO};

using namespace std;

class Game
{
protected:
    string name;
    PLAYER currentPlayer;
    vector<vector<char>> board;
    gameLogic *logic;
    IGameUI *UI;
    
public:
    Game(IGameUI* _UI) : currentPlayer(PLAYER_ONE), UI(_UI) {};
    ~Game(){};

    virtual void draw() = 0;

    // virtual void startGame() = 0;

    // virtual Point getMove() = 0;
    virtual void makeMove() = 0;
    virtual bool isGameOver() = 0;
    virtual void endGame() = 0;
    virtual void reset() = 0;
};




class GameController
{
private:
    Game* game;
public:
    GameController(Game* _game);
    ~GameController();
};

#endif