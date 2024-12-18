#include "Zombie.hpp"

int main()
{
    Zombie zombie1("ONE");
    Zombie *zombie2 = zombie1.newZombie("TWO");
    zombie1.announce();
    zombie2->announce();
    zombie1.randomChump("THREE");
    delete zombie2;
}
