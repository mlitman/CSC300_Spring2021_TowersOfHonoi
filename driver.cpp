#include <iostream>
#include "Game.hpp"

using namespace std;

int main(int argc, char** argv)
{
    Game* theGame = new Game();
    theGame->play();
    return 0;
}