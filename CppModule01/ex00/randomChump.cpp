#include "Zombie.hpp"

void 	Zombie::randomChump( std::string name)
{
    Zombie new_zombie = Zombie(name);
    new_zombie.announce();
}