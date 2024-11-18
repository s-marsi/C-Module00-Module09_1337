#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class   HumanA
{
    std::string	name;
    Weapon 		&weapon;
	public:
		HumanA( std::string Name, Weapon &init_weapon );
		void	attack( void );
};

#endif