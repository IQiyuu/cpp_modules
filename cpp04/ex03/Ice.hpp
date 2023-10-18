#ifndef GLACE
# define GLACE

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria {

    public:
        Ice( void );
        Ice( std::string const & _type );
        Ice( const Ice & );
        ~Ice( void );
        Ice &operator=( const Ice & );

        AMateria*   clone( void ) const;
        void        use( ICharacter &target );

};

#endif