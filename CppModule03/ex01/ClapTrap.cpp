#include "./ClapTrap.hpp"

ClapTrap::ClapTrap() : hit_points(10), energy_points(10), attack_damage(0)
{
    name = "Boot";
    std::cout << "ClapTrap Default Constructor called!" << std::endl;
} 

ClapTrap::ClapTrap(std::string _name) : hit_points(10), energy_points(10), attack_damage(0)
{
    name = _name;
    std::cout << "ClapTrap Parametrized Constructor called!" << std::endl;
} 

ClapTrap::ClapTrap(ClapTrap &copy)
{
    *this = copy;
    std::cout << "ClapTrap Copy Constructor called!" << std::endl;
}   

ClapTrap &ClapTrap::operator=(ClapTrap &copy)
{
    if (this != &copy)
    {
        name = copy.name;
        hit_points = copy.hit_points;
        energy_points = copy.energy_points;
        attack_damage = copy.attack_damage;
    }
    std::cout << "ClapTrap Assignement operator called!" << std::endl;
    return (*this);
}   

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << name;
    if (hit_points <= 0)
        std::cout << " is already dead!";
    else if (energy_points <= 0)
        std::cout << " have no energy points left to attack.";
    else
    {
        energy_points--;
        std::cout << " attacks " << target << ", causing " << attack_damage << " DP. Remaining EP: " << energy_points;

    }
    std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points <= 0)
        std::cout << "ClapTrap " << name << " is already dead!";
    else
    {
        hit_points -= amount;
        if ( hit_points <= 0 )
        {
            if (hit_points < 0)
                hit_points = 0;
            std::cout << "ClapTrap " << name << " has been attacked and lost " << amount << " HP. Remaining HP: " << hit_points << ".\n" << "ClapTrap " << name << " is dead!";
        }
        else
        {
            std::cout << "ClapTrap " << name << " has been attacked and lost " << amount << " HP. Remaining HP: " << hit_points <<  ", Remaining EP: " << energy_points << ".";
        }
    }
    std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << name;
    if (hit_points <= 0)
        std::cout << " is already dead!";
    else if (energy_points <= 0)
        std::cout << " have no energy points left to beRepaired.";
    else if (amount)
    {
        hit_points += amount;
        energy_points--;
        std::cout << " repairs itself for " << amount 
          << " HP. New HP: " << hit_points << " Remaining EP: " << energy_points;
    }
    std::cout << std::endl;
}

std::string	ClapTrap::getName( void ) const
{
    return (name);
}

int	        ClapTrap::getHitP( void ) const
{
    return (hit_points);
}

int	        ClapTrap::getEnP( void ) const
{
    return ( energy_points );
}

int	        ClapTrap::getattD( void ) const
{
    return ( attack_damage );
}


ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}
