#ifndef CAT
# define CAT

#include "Animal.hpp"

class Cat: public Animal{
    private:
        std::string type;
        Brain   *brain;

    public:
        Cat( void );
        Cat( const Cat & );
        ~Cat( void );
        Cat &operator=( Cat const & );

        std::string getType( void ) const;
        void    makeSound( void ) const;
        Brain   *getBrain( void ) const;
};

#endif