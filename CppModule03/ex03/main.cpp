#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("DiamondPlayer");
    ScavTrap b("ScavTrapA");
    FragTrap c("FragTrapB");
    a.ClapTrap::attack("test");
    a.attack("test");
    a.beRepaired(10);
    a.whoAmI();
    b.attack(c.getName());
    c.takeDamage(b.getattD());
    c.attack(b.getName());
    b.takeDamage(c.getattD());
}
