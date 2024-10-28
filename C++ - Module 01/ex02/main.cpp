#include <iostream>
#include <iomanip>
#define   GREEN "\033[32m"
#define DEFAULT "\033[0m"
int main()
{
    std::string Brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &Brain;
    std::string& stringREF = Brain;

    // --------------- MEMORY  ADDRESSE ------------

    std::cout << "\033[0m" << std::setw(35) << std::left <<"memory address of string Brain: " << "\033[32m" << &Brain << std::endl;
    std::cout << "\033[0m" << std::setw(35) << std::left <<"memory address held by stringPTR: " << "\033[32m" << stringPTR << std::endl;
    std::cout << "\033[0m" << std::setw(35) << std::left <<"memory address held by stringREF: " << "\033[32m" << &stringREF << std::endl << std::endl << std::endl;

    // --------------- VALUE ------------

    std::cout << "\033[0m" << std::setw(35) << std::left <<"value of string Brain: " << "\033[32m" << Brain << std::endl;
    std::cout << "\033[0m" << std::setw(35) << std::left <<"value pointed to by stringPTR: " << "\033[32m" << *stringPTR << std::endl;
    std::cout << "\033[0m" << std::setw(35) << std::left <<"value pointed to by stringREF: " << "\033[32m" << stringREF << std::endl;

}