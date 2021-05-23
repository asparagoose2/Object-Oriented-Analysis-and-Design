#include "TicTacToe.h"

TicTacToe::TicTacToe(DIFFICULTY difficulty ,IGameUI* _UI) : Game(_UI) , counter(0)
{
    board.resize(BOARD_WIDTH);
    for (size_t i = 0; i < BOARD_WIDTH; i++)
    {
        board[i].resize(BOARD_HEIGHT);
        for (size_t j = 0; j < BOARD_HEIGHT; j++)
        {
            board[i][j] = EMPTY;   
        }
    }
    if (EASY == difficulty)
    {
        logic = new ticTacToeLogicEasy;
    }
    if (MEDIUM == difficulty)
    {
        logic = new ticTacToeLogicMedium;
    }
    
}

TicTacToe::~TicTacToe()
{
    delete logic;
}

bool TicTacToe::isMoveValid(Point& move)
{
    return (board[move.y][move.x] == EMPTY);
}
Point TicTacToe::MoveToPoint(char move_char)
{
   Point move; 
   switch (move_char)
   {
   case '1':
       move.x = 0;
       move.y = 0;
       break;
   case '2':
       move.x = 1;
       move.y = 0;
       break;
   case '3':
       move.x = 2;
       move.y = 0;
       break;
   case '4':
       move.x = 0;
       move.y = 1;
       break;
   case '5':
       move.x = 1;
       move.y = 1;
       break;
   case '6':
       move.x = 2;
       move.y = 1;
       break;
   case '7':
       move.x = 0;
       move.y = 2;
       break;
   case '8':
       move.x = 1;
       move.y = 2;
       break;
   case '9':
       move.x = 2;
       move.y = 2;
       break;
   
   default:
       break;
   }
   return move;
}

void TicTacToe::makeMove()
{
    if(currentPlayer == PLAYER_ONE){
        PlayerMakeMove();
        currentPlayer = PLAYER_TWO;
    } 
    else {
        logic->makeMove(board);
        currentPlayer = PLAYER_ONE;
    }
    counter++;
}
void TicTacToe::PlayerMakeMove()
{
    Point move = MoveToPoint(UI->getSelection(validInput));

    while(board[move.y][move.x] != EMPTY)
    {
        UI->printInvalidInput();
        move = MoveToPoint(UI->getSelection(validInput));
    }

    board[move.y][move.x] =  X;
}

bool TicTacToe::isThereWinner()
{
    if (board[0][0] == board[0][1] && board[0][1] == board[0][2]) //first row
        return true;

    else if (board[1][0] == board[1][1] && board[1][1] == board[1][2]) //second row
        return true;

    else if (board[2][0] == board[2][1] && board[2][1] == board[2][2]) // third row
        return true;

    else if (board[0][0] == board[1][0] && board[1][0] == board[2][0]) // first col
        return true;

    else if (board[0][1] == board[1][1] && board[1][1] == board[2][1]) // second col
        return true;

    else if (board[0][2] == board[1][2] && board[1][2] == board[2][2]) //third col
        return true;

    else if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) // diagonal
        return true;

    else if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) // diagonal
        return true;

    return false;
}

bool TicTacToe::validInput(char c)
{
    if(c-'0' > 0 && c-'0'<= 9)
        return true;
    return false;
}

bool TicTacToe::isGameOver()
{
    if(counter > 8)
        return true;

    if (board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][2] != EMPTY) //first row
        return true;

    else if (board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][2] != EMPTY) //second row
        return true;

    else if (board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][2] != EMPTY) // third row
        return true;

    else if (board[0][0] == board[1][0] && board[1][0] == board[2][0] && board[2][0] != EMPTY) // first col
        return true;

    else if (board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[2][1] != EMPTY) // second col
        return true;

    else if (board[0][2] == board[1][2] && board[1][2] == board[2][2] && board[2][2] != EMPTY) //third col
        return true;

    else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != EMPTY) // diagonal
        return true;

    else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != EMPTY) // diagonal
        return true;
    
    
    return false;
}

void TicTacToe::endGame()
{
    if (counter > 8 && !isThereWinner())
    {
        UI->itsATie();
    }
    else if(PLAYER_ONE != currentPlayer) {
        UI->youWin();
    }
    else {
        UI->youLose();
    }
    
}

void TicTacToe::reset()
{
    for(vector<vector<char>>::iterator i = board.begin(); i != board.end(); i++)
    {
        std::fill(i->begin(), i->end(), 0);
    }

    counter = 0;
    currentPlayer = PLAYER_ONE;
    logic->reset();
}