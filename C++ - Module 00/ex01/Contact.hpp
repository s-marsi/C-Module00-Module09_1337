#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string.h>
#include <iomanip>
#include <stdlib.h>

class   Contact
{
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    public: 
        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
        void setFirstName(std::string value);
        void setLastName(std::string value);
        void setNickName(std::string value);
        void setPhoneNumber(std::string value);
        void setDarkestSecret(std::string value);

};

#endif