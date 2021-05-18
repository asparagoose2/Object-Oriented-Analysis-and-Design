#include <string>
#include <vector>
#include <iostream>

using namespace std;
// #include "TicTacToe/TicTacToe.h"

using namespace std;

void drawwMenuCLI(string items[]);
void drawBoardCLI(vector<vector<char>> board, int height, int width, char(*cellDecode)(char));
char getSelectionCLI(bool(*validSelection)(char));
void printInvalidInputCLI();

