#include "Cure.hpp"

Cure::Cure( void ): AMateria("cure") { std::cout << "Cure \x1b[32mcreated\x1b[0m" << std::endl; }
Cure::Cure( std::string const &type ): AMateria(type) { std::cout << _type << " \x1b[32mcreated\x1b[0m" << std::endl; }
Cure::Cure( const Cure &other ): AMateria(other._type) { std::cout << _type << "copy \x1b[32mcreated\x1b[0m" << std::endl; }

Cure &Cure::operator=( const Cure &other ) {
    if (other._type != this->_type)
        this->_type = other._type;
    return *this;
}

Cure::~Cure( void ) { std::cout << _type << " \x1b[31mdeleted\x1b[0m" << std::endl; }

AMateria    *Cure::clone( void ) const { 
    std::cout << "cloning cure" << std::endl;
    return new Cure(this->_type);
}

void         Cure::use( ICharacter &target ) {
    std::cout << " heals " << target.getName() << "'s woundsc *" << std::endl;
}