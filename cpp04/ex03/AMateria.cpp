#include "AMateria.hpp"

AMateria::AMateria( void ): _type("") {
    std::cout << "Abstract materia \x1b[32mcreated\x1b[0m" << std::endl;
}

AMateria::AMateria( std::string const &type ): _type(type) {
    std::cout << "Abstract materia " << _type << " \x1b[32mcreated\x1b[0m" << std::endl;
}

AMateria::AMateria( const AMateria &other ): _type(other._type) {
    std::cout << "Abstract materia " << _type << " copy \x1b[32mcreated\x1b[0m" << std::endl;
}

AMateria &AMateria::operator=( const AMateria &other ) {
    if (other._type != this->_type)
        this->_type = other._type;
    return *this;
}

std::string const &AMateria::getType( void ) const {
    return this->_type;
}

void         AMateria::use( ICharacter &target ) { 
    std::cout << " does nothing to " << target.getName() << " *" << std::endl;
}