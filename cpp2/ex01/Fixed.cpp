#include "Fixed.hpp"

Fixed::Fixed():_integer(0) {std::cout << "Default constructor called" << std::endl;}

Fixed::Fixed(const int integer): _integer(integer * 256) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number): _integer(roundf(number * 256)) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & f) {
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed&  Fixed::operator=( Fixed const& f) {
    std::cout << "Copy assignment operator called" << std::endl;
   _integer = f._integer;
    return *this;
}

Fixed::~Fixed() {std::cout << "Destructor called" << std::endl;}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _integer;
}

void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    _integer = raw;
}

int Fixed::toInt() const {
    int original_int = _integer / 256;
    return original_int;
}

float   Fixed::toFloat() const {
    float   original_float = (float)_integer / 256;
    return original_float;
}

std::ostream&	operator<<(std::ostream& o, const Fixed& f) {
    o << f.toFloat();
    return o;
}