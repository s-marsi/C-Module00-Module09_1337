#include "./ScavTrap.hpp"

int main()
{
    ScavTrap a("ScavTrapA");
    ScavTrap b("ScavTrapB");
    a.ClapTrap::attack(b.getName());
    a.attack(b.getName());
    b.takeDamage(a.getattD());
    b.beRepaired(10);
    b.attack(a.getName());
    a.takeDamage(b.getattD());
    a.beRepaired(20);
    b.beRepaired(20);
    b.guardGate();
}