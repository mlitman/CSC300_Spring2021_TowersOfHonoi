#include "Tower.hpp"
#define MAX_TOWERS 3 //macro which effectively says replace all occurance of MAX_TOWERS with a 3
#define MAX_DISKS 3

class Game
{
    private:
        Tower* theTowers[MAX_TOWERS];
        void display(); // display the 3 towers on the screen, you can do this vertically

    public:
        Game(); //setup our initial 3 towers with the disks on the far left
        void play();


};