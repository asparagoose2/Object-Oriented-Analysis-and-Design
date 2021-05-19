#include "gameUI.h"

void CLI::drawwMenu(string items[])
{
    cout << "menu\n";
}
char CLI::getSelection(bool(*validSelection)(char))
{
    int selection;
    do
    {
        cin >> selection;
        // cin.ignore(INT_MAX);
        cout << char(selection+'0');
    } while (!validSelection(char(selection+'0')));

    return char(selection+'0');    
}
void CLI::printInvalidInput()
{
    cout << "invalid move\n";
}
void CLI::youLose()
{
    cout << "you lose\n";
}
void CLI::youWin()
{
    cout << "you win\n";
}
void CLI::itsATie()
{
    cout << "its a tie\n";
}
