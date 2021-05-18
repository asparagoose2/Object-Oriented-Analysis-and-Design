#include "TicTacToe_CLI.h"

void TicTacToe_CLI::draw()
{

    // drawBoardCLI(board,3,3,symboldToPrint);

    system("cls");

    cout << "     |     |     " << endl;
    cout << "  " << char(symboldToPrint(board[0][0]) == ' '? 1+'0' : symboldToPrint(board[0][0])) << "  |  " << char(symboldToPrint(board[0][1])== ' ' ? 2+'0' : symboldToPrint(board[0][1])) << "  |  " << char(symboldToPrint(board[0][2]) == ' '? 3+'0' : symboldToPrint(board[0][2])) << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << char(symboldToPrint(board[1][0]) == ' '? 4+'0' : symboldToPrint(board[1][0])) << "  |  " << char(symboldToPrint(board[1][1])== ' ' ? 5+'0' : symboldToPrint(board[1][1])) << "  |  " << char(symboldToPrint(board[1][2]) == ' '? 6+'0' : symboldToPrint(board[1][2])) << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << char(symboldToPrint(board[2][0]) == ' '? 7+'0' : symboldToPrint(board[2][0])) << "  |  " << char(symboldToPrint(board[2][1])== ' ' ? 8+'0' : symboldToPrint(board[2][1])) << "  |  " << char(symboldToPrint(board[2][2]) == ' '? 9+'0' : symboldToPrint(board[2][2])) << endl;

    cout << "     |     |     " << endl << endl << flush;
}

char TicTacToe_CLI::symboldToPrint(char c)
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

// void TicTacToe_CLI::startGame() 
// {

// }
