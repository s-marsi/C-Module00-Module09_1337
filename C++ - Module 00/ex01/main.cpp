#include "PhoneBook.hpp"

void	input_msg()
{
	std::cout << YELLOW << "===============================\n";
    std::cout << "       Command Menu            \n";
    std::cout << "===============================\n";
    std::cout << "   [ADD]    Add a new entry    \n";
    std::cout << "   [SEARCH] Search for an entry  \n";
    std::cout << "   [EXIT]   Exit the program    \n";
    std::cout << "===============================\n";
}

int main()
{
    PhoneBook   phone_book;
    std::string input;

    while (true)
    {
        input_msg();
        while (true)
        {
            std::cout << GREEN << "Enter your command: ";
            std::cout << DEFAULT;
            std::getline(std::cin, input);
            if (std::cin.eof())
            {
                std::cerr << RED <<   "\nOperation canceled. ";
				phone_book.EXIT();
            }
            if (input.empty() || input != "EXIT" && input != "ADD" && input != "SEARCH")
			{
				std::cerr << RED << "The accepted commands are:\n";
				std::cerr << RED << "      ADD | SEARCH | EXIT\n";
			}
            else
                break;
        }
        if (input == "EXIT")
            phone_book.EXIT();
        else if (input == "SEARCH")
            phone_book.SEARCH();
        else if (input == "ADD")
            phone_book.ADD();
    }
    
}