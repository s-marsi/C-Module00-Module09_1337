#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
    int					fixed_point;
	static const int	fractional = 8;
	public :
		Fixed();
		Fixed(const int _fixed_point);
		Fixed(const float _fixed_point);
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed &obj);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );
		~Fixed();
};
std::ostream&	operator<<( std::ostream& cout, const Fixed &obj );