#pragma once
#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap &copy);
        FragTrap &operator=(FragTrap &copy);
        void attack(const std::string& target);
        void highFivesGuys(void);
        ~FragTrap();
};