#include "./Fixed.hpp"

Fixed::Fixed() : fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

// ------------------ parametrized constructor :

Fixed::Fixed(const int _fixed_point)
{
    fixed_point = _fixed_point << fractional;
}

Fixed::Fixed(const float _fixed_point)
{
    fixed_point = roundf( _fixed_point * (1 << fractional) );
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        fixed_point = obj.getRawBits();
    return (*this);
}

// ------------------ toInt and toFLoat 

float	Fixed::toFloat( void ) const
{
    return ( (float)fixed_point / (1 << fractional) );
}

int		Fixed::toInt( void ) const
{
    return ( fixed_point >> fractional );
}

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return ( fixed_point );
}

void    Fixed::setRawBits( int const raw )
{
    fixed_point = raw;
    std::cout << "setRawBits member function called" << std::endl;
}
// -------------------------- overload of the insertion («)

std::ostream&	operator<<( std::ostream& cout, const Fixed &obj )
{
    cout << obj.toFloat();
    return (cout);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}