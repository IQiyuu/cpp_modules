#ifndef ANIMAL
# define ANIMAL

#include <iostream>
#include "Brain.hpp"

class AAnimal {
    protected:
        std::string type;

    public:
        AAnimal( void );
        virtual ~AAnimal( void ) = 0;

        virtual std::string getType( void ) const;
        virtual void    makeSound( void ) const = 0;
};


#endif