#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie( std::string name )
{
    Zombie *newZombie = new Zombie;
    newZombie->name = name;
    return (newZombie);
}

void Zombie::randomChump( std::string name )
{
    Zombie *newZombie = new Zombie;
    newZombie->name = name;
    newZombie->announce();
    delete newZombie; 
}

Zombie::~Zombie()
{
    std::cout << name + ": destroyed." << std::endl;
}
