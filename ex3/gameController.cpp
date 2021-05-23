#include "gameController.h"


void gameController::Play()
{
    game->draw();
    do
    {
        game->makeMove();
        game->draw();
    }
    while(!(game->isGameOver()));
    game->endGame();
    cout << "reset\n\n\n\n\n\n\n\nreseted";
    game->reset();
    game->draw();
    cout<<"reseted";
    do
    {
        game->makeMove();
        game->draw();
    }
    while(!(game->isGameOver()));

}