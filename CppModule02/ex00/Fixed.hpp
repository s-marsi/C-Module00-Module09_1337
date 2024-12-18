#pragma once
#include <iostream>

class Fixed
{
    int					fixed_point;
	static const int	fractional = 8;
	public :
		Fixed();
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed &obj);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};