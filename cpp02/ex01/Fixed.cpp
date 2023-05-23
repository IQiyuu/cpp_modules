#include "Fixed.hpp"
const int Fixed::jsp = 8;
Fixed::Fixed( void ): entier(0) { std::cout << "default constructed" << std::endl; }
Fixed::Fixed( const Fixed &n ) { 
	std::cout << "copy constructed" << std::endl;
	*this = n; 
}
Fixed::Fixed( const int n ) {
	entier = n << jsp;
	std::cout << "int constructed" << std::endl;
}
Fixed::Fixed( const float n ) {
	entier = round(n * (1 << jsp));
	std::cout << "float constructed" << std::endl;
}

Fixed::~Fixed( void ) { std::cout << "destructed" << std::endl; }

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
	return (entier >> jsp);
}

float	Fixed::toFloat( void ) const {
	return ((float)entier / (float)(1 << jsp));
}