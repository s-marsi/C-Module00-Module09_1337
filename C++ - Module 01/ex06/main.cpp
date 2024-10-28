#include "Harl.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cerr << RED << "Input format: ./harlFilter LEVEL" <<std::endl;  
        return (1);
    }
    Harl harlFilter;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    std::string input = av[1];
    int i = 0;
    for (i; i < 4; i++)
    {
        if (levels[i] == input)
            break;
    }
    switch (i)
    {
        case 0 :
            harlFilter.complain("DEBUG");
        case 1 :
            harlFilter.complain("INFO");
        case 2 :
            harlFilter.complain("WARNING");
        case 3 :
            harlFilter.complain("ERROR");
            break;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    
}
