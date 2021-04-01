#include "Tower.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

Tower::Tower()
{
    this->top = NULL;
    this->count = 0;
}

Disk* Tower::pop()
{
    //remove the top element and return it or just return NULL if there is no top
    if(this->count == 0)
    {
        return NULL;
    }
    else
    {
        Disk* disk2Return = this->top;
        this->top = disk2Return->getNextDisk();
        disk2Return->setNextDisk(NULL);
        this->count--;
        return disk2Return;
    }
}

Disk* Tower::peek()
{
    //returns without removing the top element or just return NULL if there is no top

}

void Tower::display()
{
    if(this->count == 0)
    {
        cout << "Empty Tower" << endl;
        return;
    }
    
    //cout on each disks toString for the entire tower
    Disk* currDisk = this->top;
    while(currDisk)
    {
        cout << currDisk->toString() << endl;
        currDisk = currDisk->getNextDisk();
    }
}   

void Tower::push(Disk* d)
{
    //add an element to the top of the stack
    //don't implement tower of hanoi rules yet
    d->setNextDisk(this->top);
    this->top = d;
    this->count++;
}