#include "PhoneBook.hpp"

bool    isValidCommande(std::string input)
{
    return (!input.empty() && (input == "ADD" || input == "SEARCH" || input == "EXIT"));
}

void	commande_line()
{
	std::cout << YELLOW << "===============================\n";
    std::cout << "       Command Menu            \n";
    std::cout << "===============================\n";
    std::cout << "   [ADD]    Add a new contact    \n";
    std::cout << "   [SEARCH] Search for a contact  \n";
    std::cout << "   [EXIT]   Exit the program    \n";
    std::cout << "===============================\n";
}

int	main()
{
	PhoneBook	phone_book;
    std::string input;

	while (true)
	{
		commande_line();
        while (true)
        {
            std::cout << BLUE << "Enter your command: ";
            std::cout << DEFAULT;
            getline(std::cin, input);
            if (std::cin.eof())
            {
                std::cout << RED << "\nOperation canceled.\n";
                std::cout << DEFAULT; 
                phone_book.EXIT();
            }
            if (isValidCommande(input))
                break ;
            std::cerr << RED << "The accepted commands are:\n";
			std::cerr << RED << "      ADD | SEARCH | EXIT\n";
        }
        if (input == "EXIT")
            phone_book.EXIT();
        else if (input == "ADD")
            phone_book.ADD();
        else if (input == "SEARCH")
            phone_book.SEARCH();
	}
}