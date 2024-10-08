#include "PhoneBook.hpp"
#include <ios>
 
int	is_only_withspace(std::string first_name)
{
    // return the position of the first char not in args, If no such characters are found, the function returns string::npos.
	if (first_name.find_first_not_of(" \t\v\n") != std::string::npos)
        return (0);
    return (1);
}

bool	input_info(std::string msg, std::string* arg)
{
    std::cout << GREEN;
    std::cout << "entre the " << msg;
    while (true)
    {
        std::cout << DEFAULT;
		if (!std::getline(std::cin, *arg))
		{
            std::cout << RED;
       		std::cerr << "Operation canceled: No contacts were added. The program has stopped. ";
			return (true);
		}
        if (!((*arg).empty() || is_only_withspace(*arg)))
        {
            std::cout << RED;
            if (msg == "phone number: " && !is_valid_phone_number(*arg))
                std::cerr << msg <<  "Should contain only numbers.\n";
            else if ((msg == "first name: " || msg == "last name: ") && !is_only_alpha(*arg))
                std::cerr << msg << "Should contain only alphabetic characters.\n" ;
            else
                return (false);
        }
        std::cout << GREEN;
        std::cerr << "entre a valid " << msg;
    }
	return (0);
}

bool    call_add(PhoneBook* phone_book)
{
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;
   if (input_info("first name: ", &first_name) 
   		|| input_info("last name: ", &last_name) 
   		|| input_info("nick name: ", &nick_name) 
    	|| input_info("phone number: ", &phone_number) 
		|| input_info("darkest secret: ", &darkest_secret))
    {
        return (true);
    }
    (*phone_book).ADD(first_name, last_name, nick_name, phone_number, darkest_secret);
	return (false);
}

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

int	PhoneBook::index = 0;
int	PhoneBook::num_contact = 0;
int main()
{
    PhoneBook   phone_book;
    std::string prompt;
    while (true)
    {
       input_msg();
		while (true)
		{
        	std::cout << GREEN << "Enter your command: ";
            std::cout << DEFAULT;
			if (!std::getline(std::cin, prompt))
			{
				std::cerr << RED <<   "\nOperation canceled. ";
				phone_book.EXIT();
			}
			if (prompt.empty() || prompt != "EXIT" && prompt != "ADD" && prompt != "SEARCH")
			{
				std::cerr << RED << "The accepted commands are:\n";
				std::cerr << RED << "      ADD | SEARCH | EXIT\n";
			}
			else
				break;
		}
        if (prompt == "EXIT")
        {
            phone_book.EXIT();
        }
        else if (prompt == "ADD" && call_add(&phone_book))
			phone_book.EXIT();
        else if (prompt == "SEARCH")
            phone_book.SEARCH();
    }
	return (0);
}