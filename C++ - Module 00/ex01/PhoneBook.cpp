#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void )
{
	contact_count = 0;
	contact_index = 0;
}

void	PhoneBook::ADD( void )
{
	Contact	new_contact;
	std::string	input;

	if (user_input("first name: ", &input))
		EXIT();
	new_contact.setFirstName(input);
	if (user_input("last name: ", &input))
		EXIT();
	new_contact.setlastName(input);
	if (user_input("nickname: ", &input))
		EXIT();
	new_contact.setNickname(input);
	if (user_input("phone number: ", &input))
		EXIT();
	new_contact.setPhoneNumber(input);
	if (user_input("darkest secret: ", &input))
		EXIT();
	new_contact.setDarkestSecret(input);
	contacts[contact_index] = new_contact;
	if (contact_count < MAX_CONTACTS)
		contact_count++;
	if (contact_index == MAX_CONTACTS - 1)
		contact_index = 0;
	else
		contact_index++;
}

void	PhoneBook::SEARCH( void )
{
	std::string	input;
	int	index;

	if (contact_count == 0)
	{
		std::cout << RED << "No contacts found. Returning to menu." << std::endl;
		return ;
	}
	print_header();
	for (int i = 0; i < contact_count; i++)
	{
		print_body(&contacts[i], i);
	}
	std::cout << std::endl;
	if (get_index(&input, contact_count))
		EXIT();
	index = std::stoi(input);
	if (index >= 0 && index < contact_count)
	{
		std::cout << DEFAULT << std::endl\
		<< "Index         : " << index << std::endl\
		<< "First Name    : " << contacts[index].getFirstName() << std::endl\
		<< "Last Name     : " <<contacts[index].getlastName() << std::endl\
		<< "Nickame       : " <<contacts[index].getNickname() << std::endl\
		<< "Phone number  : " <<contacts[index].getPhoneNumber() << std::endl\
		<< "Darkest secret: " <<contacts[index].getDarkestSecret() << std::endl;\
	}
	std::cout << std::endl << std::endl;
}

void	PhoneBook::EXIT( void )
{
	exit (0);
}
