#ifndef DOG
# define DOG

#include "Animal.hpp"

class Dog: public Animal{
    private:
        std::string type;

    public:
        Dog( void );
        ~Dog( void );

        std::string getType( void ) const;
        void    makeSound( void ) const;
};

#endif