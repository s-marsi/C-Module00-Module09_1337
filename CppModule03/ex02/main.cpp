#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"

int main()
{
    ScavTrap a("ScavTrapA");
    FragTrap b("FragTrapB");
    a.ClapTrap::attack(b.getName());
    a.attack(b.getName());
    b.takeDamage(a.getattD());
    b.beRepaired(20);
    b.attack(a.getName());
    a.takeDamage(b.getattD());
    a.guardGate();
    b.highFivesGuys();
}