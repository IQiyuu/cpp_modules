#include "Harl.hpp"

Harl::Harl( void ) { std::cout << "Harl \x1b[32mcreated\x1b[0m" << std::endl; }

Harl::~Harl( void ) { std::cout << "Harl \x1b[31mdestructed\x1b[0m" << std::endl; }

Harl    Harl::operator=( const  Harl& Harl ) { (void)Harl; return (*this); }

void    Harl::info( void ) { std::cout << "Info" << std::endl; }
void    Harl::debug( void ) { std::cout << "Debug" << std::endl; }
void    Harl::error( void ) { std::cout << "Error" << std::endl; }
void    Harl::warning( void ) { std::cout << "Warning" << std::endl; }

void    Harl::complain( std::string level ) {
    void (Harl::*ptr[4])(void) = { &Harl::info, &Harl::debug, &Harl::error, &Harl::warning };
    std::string l[4] = { "INFO", "DEBUG", "ERROR", "WARNING" };

    for (int i = 0; i < 4; i++)
        if (l[i] == level)
            (this->*ptr[i])();
}