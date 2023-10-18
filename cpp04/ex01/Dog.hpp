#ifndef DOG
# define DOG

#include "Animal.hpp"

class Dog: public Animal{
    private:
        std::string type;
        Brain   *brain;

    public:
        Dog( void );
        Dog( const Dog & );
        ~Dog( void );
        Dog &operator=( Dog const & );

        std::string getType( void ) const;
        Brain       *getBrain( void ) const;
        void    makeSound( void ) const;
};

#endif