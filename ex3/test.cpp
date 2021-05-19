#include "TicTacToe/TicTacToe_CLI.h"
#include "gameController.h"

using namespace std;

int main(int argc, char const *argv[])
{
    gameController g(new TicTacToe_CLI(EASY,true));
    g.Play();
    // TicTacToe_CLI b;
    // b.startGame();
    // b.draw();
    // b.makeMove(1,1,PLAYER_ONE);
    // b.makeMove(1,2,PLAYER_ONE);
    // b.makeMove(1,0,PLAYER_ONE);
    // b.makeMove(0,1,PLAYER_ONE);
    // b.makeMove(0,0,PLAYER_ONE);
    // b.makeMove(0,2,PLAYER_ONE);
    // b.makeMove(2,1,PLAYER_ONE);
    // b.makeMove(2,0,PLAYER_ONE);
    // b.makeMove(2,2,PLAYER_ONE);
    // b.draw();

    // cout << b.symboldToPrint(X);
    return 0;
}
