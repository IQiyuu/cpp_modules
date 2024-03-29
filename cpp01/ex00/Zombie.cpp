#include "Zombie.hpp"

Zombie::Zombie( std::string name ): name(name) { 
    std::cout << "Zombie " << name << GREEN << " created" << WHITE << std::endl;
}

Zombie::~Zombie( void ){
	std::cout << "Zombie " << name << RED << " deleted" << WHITE << std::endl;
}

Zombie  Zombie::operator=( const Zombie &zombie ) {
    name = zombie.name;
    return ( *this );
}

void    Zombie::announce( void ) {
    std::cout << name << ": BraiiiiiiinnnnnnzzzzzZ" << std::endl;
}