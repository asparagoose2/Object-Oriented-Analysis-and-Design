#include "TicTacToe/TicTacToe_CLI.h"
#include "gameController.h"
#include <vector>

#define underline "\033[4m"

using namespace std;


char symboldToPrint(char c)
{
    switch (c)
    {
    case EMPTY:
        return ' ';
    case X:
        return 'X';
    case O:
        return 'O';
    }

    return ' ';
}

int main(int argc, char const *argv[])
{
    IGameUI* myUI = new CLI();
    // gameController g(new TicTacToe_CLI(MEDIUM,myUI));
    // g.Play();

    vector<vector<char>> board;

    board.resize(3);
    for (size_t i = 0; i < 3; i++)
    {
        board[i].resize(BOARD_WIDTH);
        for (size_t j = 0; j < BOARD_WIDTH; j++)
        {
            board[i][j] = EMPTY;   
        }
    }

    board[2][2] = X;

    myUI->draw(board,0,symboldToPrint);
    cout << endl;
    myUI->draw(board,1,symboldToPrint);
    cout << endl;
    myUI->draw(board,3,symboldToPrint);
    cout << endl;
    myUI->draw(board,5,symboldToPrint);

    return 0;
}
