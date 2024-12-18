#pragma once
#include <iostream>

class ClapTrap
{
	protected:
		std::string	name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;
    public :
        ClapTrap();
		ClapTrap(std::string _name);
        ClapTrap(ClapTrap &copy);
        ClapTrap &operator=(ClapTrap &copy);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
        ~ClapTrap();
		std::string	getName( void ) const;
		int			getHitP( void ) const;
		int			getEnP( void ) const;
		int			getattD( void ) const;
};