#pragma once
#include "./ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap &copy);
        ScavTrap &operator=(ScavTrap &copy);
        void attack(const std::string& target);
        void guardGate();
        ~ScavTrap();
};