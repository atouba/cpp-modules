#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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
};

std::ostream&	operator<<(std::ostream& o, const Fixed& f);

#endif