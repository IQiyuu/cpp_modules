#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
/*
int main( void ) {
	Fixed a;
	Fixed b( 10 );
	Fixed const c( 42.25f );
	Fixed const d( 156.2f );

	a = Fixed( 1234.4321f );

	std::cout << ((a <= b) ? "a <= b" : "b <= a") << std::endl;
	std::cout << ((a < b) ? "a < b" : "b < a") << std::endl;
	std::cout << ((a >= b) ? "a >= b" : "b >= a") << std::endl;
	std::cout << ((a > b) ? "a > b" : "b > a") << std::endl;
	std::cout << ((a == b) ? "a == b" : "b != a") << std::endl;
	std::cout << ((a != b) ? "a != b" : "b == a") << std::endl;

	std::cout << "\n" << a << " + " << b << " = "  << (a + b) << std::endl;
	std::cout << "\n" << a << " - " << b << " = "  << (a - b) << std::endl;
	std::cout << "\n" << a << " * " << b << " = "  << (a * b) << std::endl;
	std::cout << "\n" << a << " / " << b << " = "  << (a / b) << std::endl;


	std::cout << "\n" << a << "-- " << " = " << a-- << "/" << a << "\\" << std::endl;
	std::cout << a << "++ " << " = " << a++ << "/" << a << "\\" << std::endl;
	std::cout << b << "-- " << " = " << b-- << "/" << b << "\\" << std::endl;
	std::cout << b << "++ " << " = " << b++ << "/" << b << "\\" << std::endl;

	std::cout << "--" << a << " = " << --a << std::endl;
	std::cout << "++" << a << " = " << ++a << std::endl;
	std::cout << "--" << b << " = " << --b << std::endl;
	std::cout << "++" << b << " = " << ++b << std::endl;

	std::cout << "\nFixed::min(a,b) = " << a.min(a,b) << std::endl;
	std::cout << "Fixed::min(d,c) = " << a.min(d,c) << std::endl;
	std::cout << "Fixed::max(a,b) = " << a.max(a,b) << std::endl;
	std::cout << "Fixed::max(c,d) = " << a.max(c,d) << std::endl;

	std::cout << "\na is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}*/