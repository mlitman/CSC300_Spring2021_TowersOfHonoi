#include "Game.hpp"
#include <iostream>

using namespace std;

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
        cout << "Tower #: " << i << endl << endl;
    }
}

void Game::play()
{
    int source, destination;
    Disk* temp;
    int numMoves = 0;
    while(this->theTowers[MAX_TOWERS - 1]->getCount() < MAX_DISKS) 
    {
        this->display();
        cout << "Source Tower: ";
        cin >> source;
        cout << "Destination Tower: ";
        cin >> destination;

        //we need to make sure this is a legal move
        if(this->theTowers[destination]->getCount() != 0 &&
            this->theTowers[destination]->peek()->getSize() < 
            this->theTowers[source]->peek()->getSize())
            {
                //we have an illegal move
                cout << "Illegal Move!!!" << endl << endl;
                continue; //skip to the next iteration of this loop
            }
        numMoves++;
        temp = this->theTowers[source]->pop();
        this->theTowers[destination]->push(temp);
        cout << "**************************" << endl << endl;
    }
    this->display();
    cout << "We have a winner in (" << numMoves << ") moves!!!" << endl;
}