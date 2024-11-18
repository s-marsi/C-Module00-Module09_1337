#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	std::string	name;
	public :
		Zombie* zombieHorde( int N, std::string name );
		Zombie*	newZombie( std::string name );
		void	announce( void );
		void 	randomChump( std::string name );
		void	setName( std::string Name );
		Zombie( void );
		Zombie( std::string Name );
		~Zombie( void );
};

#endif