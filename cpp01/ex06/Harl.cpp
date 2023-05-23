#include "Harl.hpp"

Harl::Harl( void ) { std::cout << "Harl created" << std::endl; }

Harl::~Harl( void ) { std::cout << "Harl destructed" << std::endl; }

Harl    Harl::operator=( const  Harl& Harl ) { (void)Harl; return (*this); }

void    Harl::info( void ) { std::cout << "Info" << std::endl; }
void    Harl::debug( void ) { std::cout << "Debug" << std::endl; }
void    Harl::error( void ) { std::cout << "Error" << std::endl; }
void    Harl::warning( void ) { std::cout << "Warning" << std::endl; }

void    Harl::complain( std::string level ) {
    std::string l[4] = { "INFO", "DEBUG", "WARNING", "ERROR" };
	int	index = -1;

	for (int i = 0; i < 4; i++)
		if (l[i] == level)
			index = i;
    switch (index) {		
		case 0:
			info();
		case 1:
			debug();
		case 2:
			warning();
		case 3:
			error();
			break ;
		default:
			std::cout << "Unknow" << std::endl;
	}
}