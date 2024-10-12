#include "Zombie.hpp"

int  main()
{
    Zombie zombie1;
    zombie1.announce();
    Zombie *newtest = zombie1.newZombie("TWO");
    newtest->announce();
    newtest->randomChump("Three");
    delete newtest;
    return (0);
}
