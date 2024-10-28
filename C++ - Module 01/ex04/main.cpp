#include <iostream>
#include <fstream>
#include<string.h>

#define     RED "\033[31m"  
#define DEFAULT "\033[0m"

int main(int ac, char *av[])
{
    std::string str;
    std::string to_find;
    std::string replace;
    std::string newStr;

    if (ac != 4)
    {
        std::cerr << "\033[31m" << "Input format: ./TextReplacer fileName s1 s2" << "\033[0m" <<std::endl;  
        return (1);
    }
    to_find = av[2];
    replace = av[3];
    std::ifstream ReadFile(av[1]);
    std::ofstream ReplaceFile(strcat(av[1], ".replace"));
    if (!ReadFile.is_open() || !ReplaceFile.is_open())
    {
         std::cout << "\033[31m" << "Failed to open file." << "\033[0m" <<std::endl;  
        return (1);
    }
    while (std::getline(ReadFile, str))
    {
        int index = str.find(to_find);
        if (str.find(to_find) == std::string::npos)
        {
            ReplaceFile << str << std::endl;
            continue;
        }
        newStr = str;
        str.erase(index, to_find.length());
        str.insert(index, replace);
        ReplaceFile << str << std::endl;
    }
    ReadFile.close();
    ReplaceFile.close();
    return (0);
}   