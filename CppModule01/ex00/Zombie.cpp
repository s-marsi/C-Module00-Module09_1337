#include "Zombie.hpp"

void    Zombie::announce( void )
{
    std::cout << ((!name.empty()) ? name : "Empty" ) << ": BraiiiiiiinnnzzzZ...\n";
}
Zombie::Zombie( void ) {};

Zombie::Zombie( std::string Name) : name(Name) {};


Zombie::~Zombie( void )
{
    std::cout << ((!name.empty()) ? name : "Empty" )<< ": destroyed\n";
}
