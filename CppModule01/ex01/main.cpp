#include "Zombie.hpp"

int main()
{
    Zombie new_zombie;
    Zombie *all_zombies = new_zombie.zombieHorde(5, "test");
    for (int i = 0; i < 5; i++)
    {
        all_zombies[i].announce();
    }
    delete[] all_zombies;
}
