#include "PhoneBook.hpp"

std::string	truncateText(std::string text)
{
	return (text.length() <= 10? text : text.substr(0, 9) + ".");
}

bool	is_integer(std::string	number)
{
	int	i = 0;

	if (number[0] == '-' || number[0] == '+')
		i++;
	for (i; i < number.length(); i++)
	{
		if (!isdigit(number[i]))
			return (false);
	}
	return (true);
}

bool	is_only_alpha(std::string	str)
{
	int	i = 0;

	for (i; i < str.length(); i++)
	{
		if (isdigit(str[i]))
			return (false);
	}
	return (true);
}

bool	is_valid_phone_number(std::string	number)
{
	int	i = 0;

	if (number[0] == '+')
		i++;
	for (i; i < number.length(); i++)
	{
		if (!isdigit(number[i]))
			return (false);
	}
	return (true);
}