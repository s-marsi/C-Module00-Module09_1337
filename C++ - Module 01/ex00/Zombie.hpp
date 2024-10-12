#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <iomanip>
#include <memory> 

class	Zombie
{
	private :
		std::string	name;
	public :
		void announce( void );
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
		~Zombie();
};

#endif