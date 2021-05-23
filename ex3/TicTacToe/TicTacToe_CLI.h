#ifndef TICTACTOE_CLI_H
#define TICTACTOE_CLI_H
#include "TicTacToe.h"
#pragma once

class TicTacToe_CLI : public TicTacToe
{
public:
    TicTacToe_CLI(DIFFICULTY difficulty ,IGameUI* _UI) : TicTacToe(difficulty,_UI) {};
    ~TicTacToe_CLI(){};

    void draw();
    static char symboldToPrint(char c);

    // virtual void startGame();
};

#endif