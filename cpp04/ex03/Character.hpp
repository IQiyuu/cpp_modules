#ifndef CHARACTER
# define CHARACTER

#include "ICharacter.hpp"

class Character: public ICharacter {
    private:
        const std::string &_name;
        AMateria        *(_inventory[4]);
        Character( void );

    public:
        Character( const std::string &name );
        Character( const Character & );
        Character &operator=( const Character & );
        ~Character( void );

        void                equip( AMateria * );
        void                unequip( int idx );
        void                use( int idx, ICharacter &target );
        std::string const   &getName( void ) const;
};

#endif