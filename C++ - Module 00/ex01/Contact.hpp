#ifndef CONTACT_HPP
#define CONTACT_HPP
#define   BLACK "\033[30m"  
#define     RED "\033[31m"  
#define   GREEN "\033[32m"
#define  YELLOW "\033[33m"
#define    BLUE "\033[34m"
#define   WHITE "\033[37m"
#define DEFAULT "\033[0m"

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <sstream>

class   Contact
{
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    public:
        std::string	getFirstName( void );
        std::string	getlastName( void );
        std::string	getNickname( void );
        std::string	getPhoneNumber( void );
        std::string	getDarkestSecret( void );

        void	setFirstName(std::string value);
        void	setlastName(std::string value);
        void	setNickname(std::string value);
        void	setPhoneNumber(std::string value);
        void	setDarkestSecret(std::string value);   
};

#endif