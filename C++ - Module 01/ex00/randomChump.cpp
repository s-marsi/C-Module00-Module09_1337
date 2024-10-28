#include "Zombie.hpp"

void Zombie::randomChump( std::string name )
{
    Zombie *newZombie = new Zombie;
    newZombie->name = name;
    newZombie->announce();
    delete newZombie; 
}
