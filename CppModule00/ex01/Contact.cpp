#include "Contact.hpp"

std::string	Contact::getFirstName( void )
{
    return (firstName);
}
std::string	Contact::getlastName( void )
{
    return (lastName);
}
std::string	Contact::getNickname( void )
{
    return (nickname);
}
std::string	Contact::getPhoneNumber( void )
{
    return (phoneNumber);
}
std::string	Contact::getDarkestSecret( void )
{
    return (darkestSecret);
}
void	Contact::setFirstName(std::string value)
{
    firstName = value;
}
void	Contact::setlastName(std::string value)
{
    lastName = value;
}
void	Contact::setNickname(std::string value)
{
    nickname = value;
}
void	Contact::setPhoneNumber(std::string value)
{
    phoneNumber = value;
}
void	Contact::setDarkestSecret(std::string value)
{
    darkestSecret = value;
}  
