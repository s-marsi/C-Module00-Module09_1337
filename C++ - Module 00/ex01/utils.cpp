#include "PhoneBook.hpp"

bool	is_integer(std::string	number)
{
	for (size_t i = 0; i < number.length(); i++)
	{
		if (i == 0 && (number[0] == '-' || number[0] == '+'))
			continue;
		else if (!isdigit(number[i]))
			return (false);
	}
	return (true);
}

bool	user_input(std::string msg, std::string *input)
{
    while (true)
	{
		std::cout << GREEN << "enter the " << msg;
		std::cout << DEFAULT;
		getline(std::cin, *input);
		if (std::cin.eof())
		{
			std::cout << RED << "\nOperation canceled.\n";
			std::cout << DEFAULT;
			return (true);
		}
		if ((*input).empty())
			std::cout << RED << msg << " cannot be empty!" << std::endl;
		else
			break;
	}
	return (false);
}

void	print_header( void )
{
	std::cout << std::endl\
	<< std::right << std::setw(10) << "index" \
	<< "|" \
	<< std::setw(10) << "first name" \
	<< "|" 
	<< std::setw(10) << "last name" \
	<< "|"  \
	<< std::setw(10) <<  "nickname"\
	<< std::endl;
}

std::string	truncatedText(std::string str)
{
	return ((str.size() <= 10) ? str : str.substr(0, 9) + '.');
}

void	print_body(Contact *contact, int i)
{
	std::cout << std::right \
	<< std::setw(10) << i \
	<< "|" \
	<< std::setw(10) << truncatedText(contact->getFirstName())\
	<< "|" 
	<< std::setw(10) << truncatedText(contact->getlastName())\
	<< "|"  \
	<< std::setw(10) << truncatedText(contact->getNickname())\
	<< std::endl;
}

bool	get_index(std::string *input, int contact_count)
{
	while (true)
	{
		std::cout\
		<< GREEN << "Enter contact index to display: ";
		std::cout << DEFAULT;
		getline(std::cin, *input);
		if (std::cin.eof())
		{
			std::cout << RED << "\nOperation canceled.\n";
			std::cout << DEFAULT;
			return (true);
		}
		else if ((*input).empty() || !is_integer(*input))
			std::cout << RED << "please enter a integer value." << std::endl;
		else
		{
			std::stringstream	strToInt;
			int	index;
			strToInt << *input;
			strToInt >> index;
			if (index < 0 || index > contact_count - 1)
				std::cout << RED << "please enter a index between[0-" << contact_count - 1 << "]" << std::endl;
			else
				break;
		} 
	}
	return (false);
}
