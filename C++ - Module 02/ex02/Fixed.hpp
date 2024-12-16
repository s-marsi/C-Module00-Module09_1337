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
		bool	operator<(Fixed &obj);
		bool	operator<=(Fixed &obj);
		bool	operator>(Fixed &obj);
		bool	operator>=(Fixed &obj);
		bool	operator==(Fixed &obj);
		bool	operator!=(Fixed &obj);
		Fixed 	operator+(const Fixed &obj) const;
		Fixed 	operator-(const Fixed &obj) const;
		Fixed 	operator*(const Fixed &obj) const;
		Fixed 	operator/(const Fixed &obj) const;
		Fixed 	operator++( );
		Fixed 	operator--( );
		Fixed 	operator++( int );
		Fixed 	operator--( int );
		static 		 Fixed &min(Fixed &obj1, Fixed &obj2);
		static const Fixed &min(const Fixed &obj1, const Fixed &obj2);
		static 		 Fixed &max(Fixed &obj1, Fixed &obj2);
		static const Fixed &max(const Fixed &obj1, const Fixed &obj2);
		~Fixed();
};
std::ostream&	operator<<( std::ostream& cout, const Fixed &obj );