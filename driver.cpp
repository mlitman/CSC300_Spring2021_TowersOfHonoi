#include <iostream>
#include "Tower.hpp"

using namespace std;

int main(int argc, char** argv)
{
    Disk* d1 = new Disk(1);
    Disk* d2 = new Disk(2);
    Disk* d3 = new Disk(3);

    Tower* t = new Tower();
    t->push(d3);
    t->push(d2);
    t->push(d1);
    t->display();
    return 0;
}