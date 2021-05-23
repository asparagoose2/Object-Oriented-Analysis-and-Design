#include "gameUI.h"

void CLI::drawwMenu(string items[])
{
    std::cout << "menu\n";
}
char CLI::getSelection(bool (*validSelection)(char))
{
    int selection;
    cin >> selection;
    while (!validSelection(char(selection + '0')))
    {
        cin.clear();
        fflush(stdin);
        printInvalidInput();
        cin >> selection;
    }

    return char(selection + '0');
}
void CLI::printInvalidInput()
{
    std::cout << "invalid input\n";
}
void CLI::youLose()
{
    std::cout << "*****************" << endl
              << "*    You Lose   *" << endl
              << "*****************" << endl;
}
void CLI::youWin()
{
    std::cout << "*****************" << endl
              << "*    You Win    *" << endl
              << "*****************" << endl;
}
void CLI::itsATie()
{
    std::cout << "*****************" << endl
              << "*      Tie      *" << endl
              << "*****************" << endl;
}

void CLI::draw(vector<vector<char>> &board, int cellMargin, char(*toDraw)(char))
{
    int rowLength = (board.size() * (cellMargin * 2 + 1)) + (board.size() + 1);

    int x = 0, y = 0;

    for (size_t height = 0; height < board[0].size(); height++)
    {

        for (size_t j = 0; j < ceil(cellMargin / 2.0); j++)
        {
            std::cout << '|';
            for (size_t k = 0; k < board.size(); k++)
            {
                for (size_t i = 0; i < (cellMargin * 2) + 1; i++)
                {
                    if (j == 0)
                    {
                        std::cout << '-';
                    }
                    else
                    {
                        std::cout << ' ';
                    }
                }
                std::cout << '|';
            }
            std::cout << endl;
        }
        std::cout << '|';
        for (size_t i = 0; i < board.size(); i++)
        {
            for (size_t j = 0; j < cellMargin; j++)
            {
                std::cout << ' ';
            }
            std::cout << toDraw(board[x++][y]);
            for (size_t j = 0; j < cellMargin; j++)
            {
                std::cout << ' ';
            }
            std::cout << '|';
        }
        x = 0;
        y++;
        std::cout << endl;
        for (size_t j = 0; j < ceil(cellMargin / 2.0) - 1; j++)
        {
            std::cout << '|';
            for (size_t k = 0; k < board.size(); k++)
            {
                for (size_t i = 0; i < (cellMargin * 2) + 1; i++)
                {
                    if (height == board[0].size() - 1 && j == ceil(cellMargin / 2.0) - 2)
                    {
                        std::cout << '_';
                    }
                    else
                    {
                        std::cout << ' ';
                    }
                }
                std::cout << '|';
            }
            std::cout << endl;
        }
    }
    if (cellMargin < 3)
    {
        for (size_t i = 0; i < rowLength; i++)
        {
            std::cout << char(196);
        }
    }

    // cout << ;
    // cout << "     |     |     " << endl;
}