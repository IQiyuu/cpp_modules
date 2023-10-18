#ifndef ANIMAL
# define ANIMAL

#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string type;

    public:
        Animal( void );
        virtual ~Animal( void );

        virtual std::string getType( void ) const;
        virtual void    makeSound( void ) const;
};


#endif