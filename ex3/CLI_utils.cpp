#include "CLI_utils.h"

void drawBoardCLI(vector<vector<char>> board, int height, int width, char(*cellDecode)(char))
{
    system("cls");
    for (size_t i = 0; i < height; i++)
    {
        for (size_t j = 0; j < width-1; j++)
        {
            cout << "     |";
        }

        cout << endl;

        for (size_t j = 0; j < width; j++)
        {
            cout << "  " << cellDecode(board[j][i]);
            if (j < width-1)
                cout << "  |";
        }
        cout << endl;

        if (i-1 == height)
        {
            cout << "     |     |     " << endl << endl;
        }
        else 
        {
            cout << "_____|_____|_____" << endl;
            cout << "     |     |     " << endl;
        }
    }
}

char getSelection()
{
    char selection = 0;

    cin >> selection;

    return selection;
}
