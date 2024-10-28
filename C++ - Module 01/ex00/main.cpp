#include "Zombie.hpp"

int  main()
{
    Zombie zombie1;
    Zombie *newtest = zombie1.newZombie("TWO");
    zombie1.announce();
    newtest->announce();
    newtest->randomChump("Three");
    delete newtest;
    return (0);
}
