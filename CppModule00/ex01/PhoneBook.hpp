#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define MAX_CONTACTS 8

#include "Contact.hpp"
bool	user_input(std::string msg, std::string *input);
void	print_header( void );
void	print_body(Contact *contact, int i);
bool	get_index(std::string *input, int contact_count);

class	PhoneBook
{
	Contact contacts[MAX_CONTACTS];
    int     contact_count;
    int     contact_index;
	public: 
        PhoneBook( void );
		void	ADD( void );
		void	SEARCH( void );
		void	EXIT( void );
};

#endif