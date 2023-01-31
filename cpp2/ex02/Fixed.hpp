#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int					_integer;
	static const int	_fractional = 8;

public:
	Fixed();
	Fixed(const Fixed& f);
	Fixed&	operator=(const Fixed& f);
	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits(int const raw);
	Fixed(const int integer);
	Fixed(const float number);
	int toInt( void ) const;
	float toFloat( void ) const;

	bool	operator>(const Fixed& f) const;
	bool	operator<(const Fixed& f) const;
	bool	operator>=(const Fixed& f) const;
	bool	operator<=(const Fixed& f) const;
	bool	operator==(const Fixed& f) const;
	bool	operator!=(const Fixed& f) const;
	Fixed	operator+(const Fixed& f) const;
	Fixed	operator-(const Fixed& f) const;
	Fixed	operator*(const Fixed& f) const;
	Fixed	operator/(const Fixed& f) const;

	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);

	static Fixed&	min(Fixed& f1, Fixed& f2) ;
	static const Fixed&	min(const Fixed& f1, const Fixed& f2) ;
	static Fixed&	max(Fixed& f1, Fixed& f2) ;
	static const Fixed&	max(const Fixed& f1, const Fixed& f2) ;
};

std::ostream&	operator<<(std::ostream& o, const Fixed& f);

#endif