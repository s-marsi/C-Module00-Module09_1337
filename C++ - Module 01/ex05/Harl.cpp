#include "Harl.hpp"

typedef void (Harl::*fun_ptr)( void );

void	Harl::debug( void )
{
    std::cout << BLUE << "[ DEBUG ]\n" << DEFAULT;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void	Harl::info( void )
{
    std::cout << GREEN << "[ INFO ]\n" << DEFAULT;
    std::cout << "I cannot believe adding extra bacon costs more money.\n You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}
void	Harl::warning( void )
{
    std::cout << YELLOW << "[ WARNING ]\n" << DEFAULT;
    std::cout << "I think I deserve to have some extra bacon for free. \nI've been coming for years whereas you started working here since last month.\n";
}
void	Harl::error( void )
{
    std::cout << RED << "[ ERROR ]\n" << DEFAULT;
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
void	Harl::complain( std::string level )
{
	fun_ptr ptr[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (str[i] == level)
		{
			(this->*ptr[i])();
			return ;
		}
	}
	std::cout << RED << "[ Probably complaining about insignificant problems ]\n" << DEFAULT;
}