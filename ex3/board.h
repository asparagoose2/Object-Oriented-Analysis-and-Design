#include <iostream>

class Board
{
private:
    char* board;
public:
    Board(){};
    ~Board(){};
};

class board_3X3 : public Board
{
private:
    char board[3][3];
public:
    board_3X3();
    ~board_3X3(){};
    void draw();
};

board_3X3::board_3X3()
{
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            board[i][j] = '0' + ((i*3)+j+1);   
        }
    }
}

void board_3X3::draw()
{
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            std::cout << board[i][j];   
        }
    }
}