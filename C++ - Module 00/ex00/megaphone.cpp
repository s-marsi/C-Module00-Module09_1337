#include <iostream>

int main(int ac, char *av[])
{
    std::string str;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < ac; i++)
        {
            str = av[i];
            for (long unsigned j = 0; j < str.length(); j++)
            {
                std::cout << (char) toupper(str[j]);
            }
        }
    }
    std::cout << std::endl;
    return (0);
}