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

// -----------  The 6 comparison operators: >, <, >=, <=, == and !=.

bool	Fixed::operator<(Fixed &obj)
{
    return ( ( this->toFloat() < obj.toFloat()) ? true : false  );
}
bool	Fixed::operator<=(Fixed &obj)
{
    return ( ( this->toFloat() <= obj.toFloat()) ? true : false  );
}
bool	Fixed::operator>(Fixed &obj)
{
    return ( ( this->toFloat() > obj.toFloat()) ? true : false  );
}
bool	Fixed::operator>=(Fixed &obj)
{
    return ( ( this->toFloat() >= obj.toFloat()) ? true : false  );
}
bool	Fixed::operator==(Fixed &obj)
{
    return ( ( this->toFloat() == obj.toFloat()) ? true : false  );
}
bool	Fixed::operator!=(Fixed &obj)
{
    return ( ( this->toFloat() != obj.toFloat()) ? true : false  );
}

Fixed 	Fixed::operator+(const Fixed &obj) const
{
    Fixed new_obj;
    new_obj.fixed_point = this->fixed_point + obj.fixed_point;
    return ( new_obj );
}

Fixed 	Fixed::operator-(const Fixed &obj) const
{
    Fixed new_obj;
    new_obj.fixed_point = this->fixed_point - obj.fixed_point;
    return ( new_obj );
}

Fixed 	Fixed::operator*(const Fixed &obj) const
{
    Fixed new_obj;
    new_obj.fixed_point = (fixed_point * obj.fixed_point) / (1 << fractional) ;
    return ( new_obj );
}

Fixed 	Fixed::operator/(const Fixed &obj) const
{
    Fixed new_obj;
    new_obj.fixed_point = (fixed_point / obj.fixed_point) * (1 << fractional) ;
    return ( new_obj );
}


// --------------------------- The 4 increment/decrement -----------------

Fixed 	Fixed::operator++( )
{
    fixed_point++;
    return (*this); 
}

Fixed 	Fixed::operator--( )
{
    fixed_point--;
    return (*this); 
}

Fixed 	Fixed::operator++( int )
{
    Fixed new_obj( *this );
    fixed_point++;
    return (new_obj);   
}

Fixed 	Fixed::operator--( int )
{
    Fixed new_obj( *this );
    fixed_point--;
    return (new_obj);
}

// ------------------- static functions ----------

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
    return ( ( obj1.fixed_point < obj2.fixed_point ) ? obj1 : obj2 );
}

const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
    return ( ( obj1.fixed_point < obj2.fixed_point ) ? obj1 : obj2 );
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
    return ( ( obj1.fixed_point > obj2.fixed_point ) ? obj1 : obj2 );
}

const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
    return ( ( obj1.fixed_point > obj2.fixed_point ) ? obj1 : obj2 );
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}