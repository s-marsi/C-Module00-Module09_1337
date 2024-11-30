#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 0;
    std::cout << "Default constructor called\n";

}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called\n";
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout << "assignment operator called\n";
    if (this != &obj)
        this->fixed_point = obj.getRawBits();
    return  (*this);
}


int		Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return (fixed_point);
}

void	Fixed::setRawBits( int const raw )
{
    fixed_point = raw;
    std::cout << "setRawBits member function called\n";
}

Fixed::~Fixed()
{
    std::cout << "Default constructor called\n";
}
