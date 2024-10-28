#include "Zombie.hpp"

int  main()
{
    Zombie Test;
    Zombie *zombieHordeTest = Test.zombieHorde(5, "FIVE ZOMBIE");
    Test.announce();
    for (int i = 0; i < 5; i++)
	{
		zombieHordeTest->announce();
	}
    delete [] zombieHordeTest;
    return (0);
}
