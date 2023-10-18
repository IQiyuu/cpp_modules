#ifndef AMATERIA
# define AMATERIA

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
    protected:
        std::string _type;

    public:
        AMateria(std::string const & _type);
        AMateria( void );
        AMateria( const AMateria & );
        virtual ~AMateria( void ) {}
        AMateria &operator=( const AMateria & );


        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif