#include "Disk.hpp"

class Tower
{
    private:
        Disk* top;
        int count;

    public:
        Tower();
        Disk* pop();
        Disk* peek();
        void push(Disk* d);
        void display();
};