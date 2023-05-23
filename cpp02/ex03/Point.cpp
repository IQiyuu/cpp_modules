#include "Point.hpp"

Point::Point( void ): x(0), y(0) { std::cout << "Point default constructed" << std::endl; }
Point::Point( float x, float y ): x(x), y(y) { std::cout << "Point arg constructed" << std::endl; }

Point::Point( const Point &n ) { 
	std::cout << "Point copy constructed" << std::endl;
	*this = n;
}

void	Point::operator=( const Point &n ) {
	std::cout << "Point affection" << std::endl;
	x = n.x;
	y = n.y;
	return *this;
}

Point::~Point( void ) { std::cout << "Point destructed" << std::endl; }

const Fixed	&Point::getX( void ) {
	return this->x;
}

const Fixed &Point::getY( void ) {
	return this->y;
}