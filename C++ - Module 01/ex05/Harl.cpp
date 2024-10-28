#include "Harl.hpp"

typedef void (Harl::*ptr)();

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n" << std::endl;

    
}
void Harl::info( void )
{
    std::cout << BLUE << "[ INFO ]\n";
    std::cout << DEFAULT << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}
void Harl::warning( void )
{
    std::cout << YELLOW << "[ WARNING ]\n";
    std::cout << DEFAULT << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n" << std::endl;
}
void Harl::error( void )
{
    std::cout << RED << "[ ERROR ]\n";
    std::cout << DEFAULT <<  "This is unacceptable! I want to speak to the manager now.\n"  << std::endl;
}

void Harl::complain( std::string level )
{
    std::string Levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    ptr functptr[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if (Levels[i] == level)
        {
            (this->*functptr[i])();
            break ;
        }
    }
}