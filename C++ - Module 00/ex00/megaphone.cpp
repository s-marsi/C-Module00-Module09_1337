#include <iostream>

int	main(int ac, char *av[])
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string	arg = av[i];
			for (size_t j = 0; j < arg.length(); j++)
			{
				std::cout << (char) toupper(arg[j]);
			}
		}
	}
	std::cout << std::endl;
}