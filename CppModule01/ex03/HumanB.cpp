#include "HumanB.hpp"

HumanB::HumanB( void ): name(""), weapon(NULL){};

HumanB::HumanB( std::string Name ): name(Name), weapon(NULL){};

void	HumanB::attack( void )
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void    HumanB::setWeapon( Weapon &new_weapon )
{
    weapon = &new_weapon;
}