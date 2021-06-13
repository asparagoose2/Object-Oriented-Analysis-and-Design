#ifndef TICTACTOE_H
#define TICTACTOE_H
#include "../game.h"
#include <vector>
#include <iostream>
#include "../GameLogic/ticTacToeLogic.h"

#pragma once

#define BOARD_WIDTH 3
#define BOARD_HEIGHT 3

using namespace std;

enum CELL_STATE
{
    EMPTY,
    X,
    O
};

class TicTacToe : public Game
{
private:
    int counter;

public:
    TicTacToe(DIFFICULTY difficulty, IGameUI *_UI);
    ~TicTacToe();

    virtual void draw();
    virtual void drawInstractions();
    virtual void makeMove();
    bool isThereWinner();
    virtual bool isGameOver();
    Point MoveToPoint(char);
    static bool validInput(char);
    void PlayerMakeMove();
    virtual void endGame();
    virtual void reset();
    void setDifficulty(DIFFICULTY);
    static char symboldToPrint(char c);
};

#endif