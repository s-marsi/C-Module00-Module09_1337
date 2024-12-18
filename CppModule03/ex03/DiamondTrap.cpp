#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default Constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name"), ScavTrap(), FragTrap()
{
    name = _name;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 30;
    std::cout << "DiamondTrap Parametrized Constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy) : ClapTrap(), ScavTrap(), FragTrap()
{
    *this = copy;
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &copy)
{
    if (this != &copy)
        *this = copy;
    std::cout << "DiamondTrap Assignement operator called!" << std::endl;
    return (*this);
}


void DiamondTrap::attack(const std::string& target)
{
    std::cout << name;
    if (hit_points <= 0)
        std::cout << " is already dead!";
    else if (energy_points <= 0)
        std::cout << " have no energy points left to attack.";
    else
    {
        energy_points--;
        std::cout << " attacks " << target << ", causing " << attack_damage << " points of damage. Remaining EP: " << energy_points;

    }
    std::cout << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << name << ", ClapTrap name: " <<
    FragTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}