#include "Ice.hpp"

Ice::Ice( void ): AMateria("ice") {
    std::cout << _type << " \x1b[32mcreated\x1b[0m" << std::endl;
}

Ice::Ice( std::string const &type ): AMateria(type) {
    std::cout << _type << " \x1b[32mcreated\x1b[0m" << std::endl;
}

Ice::Ice( const Ice &other ): AMateria(other._type) {
    std::cout << _type << " copy \x1b[32mcreated\x1b[0m" << std::endl;
}

Ice &Ice::operator=( const Ice &other ) {
    if (other._type != this->_type)
        this->_type = other._type;
    return *this;
}

Ice::~Ice( void ) { std::cout << _type << " \x1b[31mdeleted\x1b[0m" << std::endl; }

AMateria    *Ice::clone( void ) const { 
    std::cout << "cloning ice" << std::endl;
    return new Ice(this->_type);
}

void         Ice::use( ICharacter &target ) { std::cout << " shoot an ice bolt at " << target.getName() << " *" << std::endl; }
