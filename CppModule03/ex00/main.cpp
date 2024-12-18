#include "./ClapTrap.hpp"

int main()
{
    ClapTrap a("ClapTrapA");
    ClapTrap b("ClapTrapB");
    a.attack(b.getName());
    b.takeDamage(a.getattD());
    b.beRepaired(10);
}