#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
    Zombie *new_zombie = new Zombie(name);
    return (new_zombie);
}

void 	Zombie::randomChump( std::string name)
{
    Zombie new_zombie = Zombie(name);
    new_zombie.announce();
}

void    Zombie::announce( void )
{
    std::cout << ((!name.empty()) ? name : "Braiiinz" ) << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName( std::string Name )
{
    name = Name;
}

Zombie::Zombie( void ) {};

Zombie::Zombie( std::string Name) : name(Name) {};


Zombie::~Zombie( void )
{
    std::cout << ((!name.empty()) ? name : "Braiiinz" )<< ": destroyed\n";
}