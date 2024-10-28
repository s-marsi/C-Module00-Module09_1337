#include "Zombie.hpp"

Zombie::Zombie() : name("") {}

void Zombie::announce( void )
{
    std::cout << (!name.empty() ? name : "NO_NAME") + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << (!name.empty() ? name : "NO_NAME") + ": destroyed." << std::endl;
}
