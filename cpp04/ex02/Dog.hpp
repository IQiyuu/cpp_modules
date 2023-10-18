#ifndef DOG
# define DOG

#include "AAnimal.hpp"

class Dog: public AAnimal{
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