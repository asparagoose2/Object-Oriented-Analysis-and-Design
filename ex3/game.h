#include <iostream>
#include <string>
#include <vector>
#include "point.h"
#include "CLI_utils.h"
#include "gameUI.h"
#include "gameLogic.h"

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
    Game(bool CLI_MODE = true) : currentPlayer(PLAYER_ONE) {if(CLI_MODE) UI = new CLI; else UI = new GUI;};
    ~Game(){};

    virtual void draw() = 0;

    // virtual void startGame() = 0;

    // virtual Point getMove() = 0;
    virtual void makeMove() = 0;
    virtual bool isGameOver() = 0;
    virtual void endGame() = 0;
};




class GameController
{
private:
    Game* game;
public:
    GameController(Game* _game);
    ~GameController();
};
