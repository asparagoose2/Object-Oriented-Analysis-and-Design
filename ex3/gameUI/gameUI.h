#ifndef GAMEUI_H
#define GAMEUI_H
#include <string>
#include <iostream>
#include <vector>
#include <math.h>
#include <iterator>

#pragma once

using namespace std;

class IGameUI
{
public:
    IGameUI(){};
    ~IGameUI(){};
    virtual void drawMenu(string, vector<string> &, bool clearScreen = false) = 0;
    virtual char getSelection(bool (*validSelection)(char)) = 0;
    virtual void printInvalidInput() = 0;
    virtual void printMessage(string) = 0;
    virtual void youLose() = 0;
    virtual void youWin() = 0;
    virtual void itsATie() = 0;
    virtual void drawBoard(vector<vector<char>> &boad, int cellMargin, char (*toDraw)(char), bool clearScreen = true) = 0;
};

class CLI : public IGameUI
{
public:
    CLI(){};
    ~CLI(){};

    virtual void drawMenu(string, vector<string> &, bool clearScreen = false);
    virtual char getSelection(bool (*validSelection)(char));
    virtual void printInvalidInput();
    virtual void printMessage(string);
    virtual void youLose();
    virtual void youWin();
    virtual void itsATie();
    virtual void drawBoard(vector<vector<char>> &boad, int cellMargin, char (*toDraw)(char), bool clearScreen = true);
};

class GUI : public IGameUI
{
public:
    GUI(){};
    ~GUI(){};

    virtual void drawMenu(string, vector<string> &, bool clearScreen = false){};
    virtual char getSelection(bool (*validSelection)(char)) { return 'c'; };
    virtual void printInvalidInput(){};
    virtual void printMessage(string){};
    virtual void youLose(){};
    virtual void youWin(){};
    virtual void itsATie(){};
    virtual void drawBoard(vector<vector<char>> &boad, int cellMargin, char (*toDraw)(char), bool clearScreen = true){};
};

#endif