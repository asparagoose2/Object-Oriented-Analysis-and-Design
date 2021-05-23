#include "ticTacToeLogic.h"

void ticTacToeLogicEasy::makeMove(vector<vector<char>> &board)
{
    srand(time(NULL));
    int x = 0;
    int y = 0;
    do
    {
        x = rand() % 3;
        y = rand() % 3;

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
        if (!bestMove.empty())
        {

            x = bestMove[0].x;
            y = bestMove[0].y;
            bestMove.pop_back();
        }
        else if (!goodMoves.empty())
        {

            int index = rand() % goodMoves.size();
            x = goodMoves[index].x;
            y = goodMoves[index].y;
            goodMoves.erase(goodMoves.begin() + index);
        }
        else if (!worstMoves.empty())
        {

            int index = rand() % worstMoves.size();
            x = worstMoves[index].x;
            y = worstMoves[index].y;
            worstMoves.erase(worstMoves.begin() + index);
        }

    } while (board[x][y] != EMPTY);

    board[x][y] = O;

}

void ticTacToeLogicMedium::reset()
{
    bestMove = {Point(1,1)};
    goodMoves = {Point(0,0),Point(2,2),Point(2,0),Point(0,2)};
    worstMoves = {Point(1,0),Point(0,1),Point(1,2),Point(2,1)};
}