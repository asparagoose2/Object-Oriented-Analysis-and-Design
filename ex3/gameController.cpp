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
}