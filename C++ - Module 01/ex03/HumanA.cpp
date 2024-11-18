#include "HumanA.hpp"
		
HumanA::HumanA( std::string Name, Weapon &init_weapon ): name(Name), weapon(init_weapon){};

void	HumanA::attack( void )
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}