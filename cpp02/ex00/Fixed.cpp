#include "Fixed.hpp"

Fixed::Fixed( void ): entier(0) { std::cout << "default constructed" << std::endl; }
Fixed::Fixed( const Fixed &n ) { 
	std::cout << "copy constructed" << std::endl;
	*this = n; 
}

Fixed::~Fixed( void ) { std::cout << "destructed" << std::endl; }

Fixed &Fixed::operator=( const Fixed &n ) { 
	std::cout << "assignation" << std::endl;
	if (this != &n)
		this->entier = n.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits" << std::endl;
	return this->entier;
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits" << std::endl;
	this->entier = raw;
}