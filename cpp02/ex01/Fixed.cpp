#include "Fixed.hpp"

const int Fixed::fract = 8;

Fixed::Fixed( void ): entier(0) { std::cout << "default \x1b[32mconstructed\x1b[0m" << std::endl; }
Fixed::Fixed( const Fixed &n ) { 
	std::cout << "copy \x1b[32mconstructed\x1b[0m" << std::endl;
	*this = n; 
}
Fixed::Fixed( const int n ) {
	entier = n << fract;
	std::cout << "int \x1b[32mconstructed\x1b[0m" << std::endl;
}
Fixed::Fixed( const float n ) {
	entier = roundf(n * (1 << fract));
	std::cout << "float \x1b[32mconstructed\x1b[0m" << std::endl;
}

Fixed::~Fixed( void ) { std::cout << "\x1b[31mdestructed\x1b[0m" << std::endl; }

Fixed &Fixed::operator=( const Fixed &n ) { 
	std::cout << "assignation" << std::endl;
	if (this != &n)
		this->entier = n.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed &f) {
	os << f.toFloat();
	return os;
}

int	Fixed::getRawBits( void ) const {
	return this->entier;
}

void	Fixed::setRawBits( int const raw ) {
	this->entier = raw;
}

int	Fixed::toInt( void ) const {
	return (entier >> fract);
}

float	Fixed::toFloat( void ) const {
	return ((float)entier / (float)(1 << fract));
}