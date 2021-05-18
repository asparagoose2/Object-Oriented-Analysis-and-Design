#include "game.h"

class gameController
{
private:
    Game* game;
public:
    gameController(Game* g) : game(g) {};
    ~gameController() {delete game;};

    void Play();
};

