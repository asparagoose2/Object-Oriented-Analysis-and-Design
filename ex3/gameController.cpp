#include "gameController.h"


void gameController::Play()
{
    PLAYER player = PLAYER_ONE;
    do
    {
        player = player == PLAYER_ONE? PLAYER_TWO : PLAYER_ONE;
        game->makeMove(player);
    }
    while(game->checkWin());
    
}