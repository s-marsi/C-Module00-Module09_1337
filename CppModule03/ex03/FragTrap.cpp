#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FrapTrap Default Constructor called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "ScapTrap Parametrized Constructor called!" << std::endl;
}

FragTrap::FragTrap(FragTrap &copy): ClapTrap()
{
    *this = copy;
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap &copy)
{
    if (this != &copy)
        ClapTrap::operator=(copy);
    std::cout << "FragTrap Assignement operator called!" << std::endl;
    return (*this);
}

void FragTrap::attack(const std::string& target)
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

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap Let's give a high five!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}