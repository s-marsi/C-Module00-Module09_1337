#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    contact_index = 0;
    contact_number = 0;
}

void	PhoneBook::ADD()
{
    Contact contact;
    std::string input;
    if (get_input("first name: ", &input))
        EXIT();
    contact.setFirstName(input);
    if (get_input("last name: ", &input))
        EXIT();
    contact.setLastName(input);
    if (get_input("nick name: ", &input))
        EXIT();
    contact.setNickName(input);
    if (get_input("phone number: ", &input))
        EXIT();
    contact.setPhoneNumber(input);
    if (get_input("darkest secret: ", &input))
        EXIT();
    contact.setDarkestSecret(input);
    contacts[contact_index] = contact;
    std::cout << RED << contact_index << std::endl;
    if (contact_number < MAX_CONTACT)
        contact_number++;
    if (contact_index == MAX_CONTACT - 1)
        contact_index = 0;
    else
        contact_index++;
}
void	PhoneBook::SEARCH()
{
    int i = 0;
	std::string	input;
	if (contact_number == 0)
    {
        std::cerr << RED << "No contacts found. Returning to menu." << std::endl;
		return ;
    }
    print_header();
    while (i < contact_number)
    {
        std::cout.width(10);std::right;
        std::cout << i << "|";
        std::cout.width(10);std::right;
        std::cout << truncateText(contacts[i].getFirstName()) << "|";

        std::cout.width(10);std::right;
        std::cout << truncateText(contacts[i].getLastName()) << "|";;
        std::cout.width(10);std::right;
        std::cout << truncateText(contacts[i].getNickName())  << "\n";;
        i++;
    }
    std::cout << BLUE << "---------------------------------------------------------\n" << std::endl;
}
void	PhoneBook::EXIT()
{
    std::cout << DEFAULT << "Goodbye!" << std::endl;
    exit (0);
}
