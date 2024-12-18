#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScapTrap Default Constructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScapTrap Parametrized Constructor called!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy): ClapTrap()
{
    *this = copy;
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &copy)
{
    if (this != &copy)
        ClapTrap::operator=(copy);
    std::cout << "ScavTrap Assignement operator called!" << std::endl;
    return (*this);
}

void ScavTrap::attack(const std::string& target)
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

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}