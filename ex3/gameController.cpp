#include "gameController.h"
#include <conio.h>

void gameController::Play()
{
    game->drawInstractions();
    getch();
    game->draw();
    do
    {
        game->makeMove();
        game->draw();
    } while (!(game->isGameOver()));
    game->endGame();
}