#include "PhoneBook.hpp"

bool	get_input(std::string  msg, std::string*  input)
{
	std::cout << GREEN << "enter the " << msg;
    while (true)
    {
        std::cout << DEFAULT;
        std::getline(std::cin, *input);
        if (std::cin.eof())
        {
       		std::cerr << RED << "Operation canceled.";
			return (true);
        }
        if (!(*input).empty())
            break;
        std::cout << RED << "enter a valid " << msg;
    }
	return (false);
}

std::string	truncateText(std::string text)
{
	return (text.length() <= 10? text : text.substr(0, 9) + ".");
}

void	print_header()
{
	std::cout << BLUE << "---------------------------------------------------------" << std::endl;
	std::cout << DEFAULT;
    std::cout.width(10);std::right;
    std::cout << "index" << "|";
    std::cout.width(10);std::right;
    std::cout << "firstName" << "|";
    std::cout.width(10);std::right;
    std::cout << "lastName" << "|";
    std::cout.width(10);std::right;
    std::cout << "nickName" << std::endl;
}
