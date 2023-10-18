#ifndef GUERISON
# define GUERISON

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria {
    public:
        Cure( void );
        Cure( std::string const & _type );
        Cure( const Cure & );
        ~Cure( void );
        Cure &operator=( const Cure & );

        AMateria*   clone( void ) const;
        void        use( ICharacter &target );

};

#endif