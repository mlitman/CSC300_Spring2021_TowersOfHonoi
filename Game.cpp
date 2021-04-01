#include "Game.hpp"

Game::Game()
{
    for(int i = 0; i < MAX_TOWERS; i++)
    {
        this->theTowers[i] = new Tower();
    }

    for(int i = MAX_DISKS; i > 0; i--)
    {
        this->theTowers[0]->push(new Disk(i));
    }
}

void Game::display()
{
    for(int i = 0; i < MAX_TOWERS; i++)
    {
        this->theTowers[i]->display();
    }
}