#include <iostream>

#define   BLACK "\033[30m"  
#define     RED "\033[31m"  
#define   GREEN "\033[32m"
#define  YELLOW "\033[33m"
#define    BLUE "\033[34m"
#define   WHITE "\033[37m"
#define DEFAULT "\033[0m"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cout << RED <<  "enter 1 argument\n" << DEFAULT;
        return (1);
    }
	std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    for (i = 0; i < 4; i++)
	{
		if (str[i] == av[1])
			break ;
	}
    switch (i)
    {
        case 0:
            std::cout << BLUE << "[ DEBUG ]\n" << DEFAULT;
            std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
        case 1:
            std::cout << GREEN << "[ INFO ]\n" << DEFAULT;
            std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n\n";
        case 2:
            std::cout << YELLOW << "[ WARNING ]\n" << DEFAULT;
            std::cout << "I think I deserve to have some extra bacon for free. \nI've been coming for years whereas you started working here since last month.\n\n";
        case 3:
            std::cout << RED << "[ ERROR ]\n" << DEFAULT;
            std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
            break;
        default:
	        std::cout << RED << "[ Probably complaining about insignificant problems ]\n" << DEFAULT;
            break;
    }
    return (0);
}