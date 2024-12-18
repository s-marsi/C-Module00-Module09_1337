#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class   HumanB
{
    std::string name;
    Weapon      *weapon;
    public:
        HumanB( void );
        HumanB( std::string Name );
        void	attack( void );
        void    setWeapon( Weapon &new_weapon );
};

#endif