#include "TicTacToe.h"

class TicTacToe_CLI : public TicTacToe
{
public:
    TicTacToe_CLI();
    ~TicTacToe_CLI(){};

    void draw();
    static char symboldToPrint(char c);

    // virtual void startGame();
};
