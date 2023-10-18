#ifndef CHARACTER
# define CHARACTER

#include "ICharacter.hpp"

class Character: public ICharacter {
    private:
        std::string const &_name;
        AMateria        *(_inventory[4]);
        Character( void );

    public:
        Character( std::string const &name );
        Character( Character const & );
        Character &operator=( Character const & );
        ~Character( void );

        void                equip( AMateria * );
        void                unequip( int idx );
        void                use( int idx, ICharacter &target );
        std::string const   &getName( void ) const;
};

#endif