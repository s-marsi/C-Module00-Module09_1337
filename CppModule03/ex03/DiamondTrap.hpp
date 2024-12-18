#pragma once
#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    std::string name;   
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap &copy);
        DiamondTrap &operator=(DiamondTrap &copy);
        void attack(const std::string& target);
        void whoAmI();
        ~DiamondTrap();
};