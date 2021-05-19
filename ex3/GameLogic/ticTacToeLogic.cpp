#include "ticTacToeLogic.h"


void ticTacToeLogicEasy::makeMove(vector<vector<char>> &board)
{
    srand(time(NULL));
    int x = 0;
    int y = 0;
    do
    {
        x = rand()%3;
        y = rand()%3;

    } while (board[x][y] != EMPTY);

    board[x][y] = O;
}
void ticTacToeLogicMedium::makeMove(vector<vector<char>> &board)
{
    srand(time(NULL));
    int x = 0;
    int y = 0;
    do
    {
        x = rand()%3;
        y = rand()%3;

    } while (board[x][y] != EMPTY);

    board[x][y] == X;
}