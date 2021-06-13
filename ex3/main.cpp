#include "gameController.h"
#include "TicTacToe/TicTacToe.h"
#include <vector>
#define NUM_OF_GAMES 1

int main(int argc, char const *argv[])
{
    vector<string> games = {"TicTacToe"};
    vector<string> diffs = {"Easy", "Medium"};
    string title = "Choose A Games";
    string di = "Choose Difficulty";
    IGameUI *myUI = new CLI;
    Game *myGame;
    gameController *ctrl;
    myUI->drawMenu(title, games, true);
    int selectedGame = myUI->getSelection([](char c) -> bool
                                          { return ((c - '0') > 0 && (c - '0') <= NUM_OF_GAMES); }) -
                       '0' - 1;
    myUI->drawMenu(di, diffs, true);
    int selectedDiff = myUI->getSelection([](char c) -> bool
                                          { return ((c - '0') > 0 && (c - '0') <= NUM_OF_DIFFICULTIES); }) -
                       '0';
    cout << endl
         << "Game Chosen: " << games[selectedGame] << endl;

    switch (selectedGame)
    {
    case 0:
        ctrl = new gameController(new TicTacToe(DIFFICULTY(selectedDiff), myUI));
        break;

    default:
        break;
    }

    ctrl->Play();

    return 0;
}
