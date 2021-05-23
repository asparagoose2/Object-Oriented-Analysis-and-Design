#ifndef GAMEUI_H
#define GAMEUI_H
#include <string>
#include <iostream>
#include <vector>
#include <math.h>
#pragma once

using namespace std;

class IGameUI
{
public:
    IGameUI(){};
    ~IGameUI(){};
    virtual void drawwMenu(string items[]) = 0;
    virtual char getSelection(bool(*validSelection)(char)) = 0;
    virtual void printInvalidInput() = 0;
    virtual void youLose() = 0;
    virtual void youWin() = 0;
    virtual void itsATie() = 0;
    virtual void draw(vector<vector<char>>& boad, int cellMargin, char(*toDraw)(char)) = 0;
};

class CLI : public IGameUI
{
public:
    CLI(){};
    ~CLI(){};

    virtual void drawwMenu(string items[]);
    virtual char getSelection(bool(*validSelection)(char));
    virtual void printInvalidInput();
    virtual void youLose();
    virtual void youWin();
    virtual void itsATie();
    virtual void draw(vector<vector<char>>& boad, int cellMargin,char(*toDraw)(char));

};

class GUI : public IGameUI
{
public:
    GUI(){};
    ~GUI(){};

    virtual void drawwMenu(string items[]){};
    virtual char getSelection(bool(*validSelection)(char)){return 'c';};
    virtual void printInvalidInput(){};   
    virtual void youLose(){};
    virtual void youWin(){};
    virtual void itsATie(){};
    virtual void draw(vector<vector<char>>& boad, int cellMargin,char(*toDraw)(char)) {};
};

#endif