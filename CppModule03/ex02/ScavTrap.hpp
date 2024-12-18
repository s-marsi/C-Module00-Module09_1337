#pragma once
#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap &copy);
        ScavTrap &operator=(ScavTrap &copy);
        void guardGate();
        void attack(const std::string& target);
        ~ScavTrap();
};