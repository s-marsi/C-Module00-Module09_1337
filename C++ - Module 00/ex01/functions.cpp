#include "PhoneBook.hpp"

void    PhoneBook::ADD(std::string  firstName, std::string  lastName, std::string  nickName, std::string  phoneNumber, std::string  darkestSecret)
{
    this->contacts[this->index].setFisrtName(firstName);
    this->contacts[this->index].setLastName(lastName);
    this->contacts[this->index].setNickName(nickName);
    this->contacts[this->index].setPhoneNumber(phoneNumber);
    this->contacts[this->index].setDarkestSecret(darkestSecret);
	if (this->num_contact < MAX_CONTACT)
		this->num_contact++;
    if (this->index == MAX_CONTACT - 1)
        this->index = 0;
    else
        this->index++;
}

void    PhoneBook::SEARCH()
{
    int i = 0;
	std::string	input;
	if (this->num_contact == 0)
    {
		std::cout << RED;
        std::cerr << "No contacts found. You will be returned to the menu." << std::endl;
		return ;
    }
    std::cout << BLUE << "---------------------------------------------------------" << std::endl;
	std::cout << DEFAULT;
    std::cout.width(10);std::right;
    std::cout << "index" << "|";
    std::cout.width(10);std::right;
    std::cout << "firstName" << "|";
    std::cout.width(10);std::right;
    std::cout << "lastName" << "|";
    std::cout.width(10);std::right;
    std::cout << "nickName" << std::endl;
    while (i < this->num_contact)
    {
        std::cout.width(10);std::right;
        std::cout << i << "|";
        std::cout.width(10);std::right;
        std::cout << truncateText(this->contacts[i].getFisrtName()) << "|";

        std::cout.width(10);std::right;
        std::cout << truncateText(this->contacts[i].getLastName()) << "|";;
        std::cout.width(10);std::right;
        std::cout << truncateText(this->contacts[i].getNickName())  << "\n";;
        i++;
    }
    std::cout << BLUE << "---------------------------------------------------------\n" << std::endl;
	std::cout << GREEN << "Please enter the index of the contact you wish to display: ";
	while (true)
	{

		std::cout << DEFAULT;
		if (!getline(std::cin, input))
		{
			std::cerr << RED <<   "Operation canceled. ";
			this->EXIT();
		}
		else if (input.empty() || !is_integer(input))
		{
			std::cerr << RED;
			std::cerr << "please enter a integer : ";
		}
		else if (stoi(input) > this->num_contact - 1 && this->num_contact == 1)
			std::cerr << RED << "Only one contact found. You should enter 0 to view the information: ";
		else if (stoi(input) > this->num_contact - 1)
			std::cerr << RED << "you should enter a index between 0 and " << this->num_contact - 1 << ": ";
		else
			break;
	}
	i = stoi(input);
	std::cout << BLUE << "---------------------------------------------------------\n" << std::endl;
	std::cout << DEFAULT;
	std::cout << std::setw(18) << std::right << "Index:  "         << std::setw(10) << std::right << i << std::endl;
	std::cout << std::setw(18) << std::right << "First Name:  "    << std::setw(10) << std::right << this->contacts[i].getFisrtName() << std::endl;
	std::cout << std::setw(18) << std::right << "Last Name:  "     << std::setw(10) << std::right << this->contacts[i].getLastName() << std::endl;
	std::cout << std::setw(18) << std::right << "Nickname:  "      << std::setw(10) << std::right << this->contacts[i].getNickName() << std::endl;
	std::cout << std::setw(18) << std::right << "Phone Number:  "  << std::setw(10) << std::right << this->contacts[i].getPhoneNumber() << std::endl;
	std::cout << std::setw(18) << std::right << "Darkest Secret:  "<< std::setw(10) << std::right << this->contacts[i].getDarkestSecret() << std::endl;
	std::cout << BLUE << "---------------------------------------------------------\n" << std::endl;
}

void	PhoneBook::EXIT()
{
    std::cout << DEFAULT << "Goodbye!" << std::endl;
    exit (0);
}
