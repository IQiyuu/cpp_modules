#ifndef CAT
# define CAT

#include "AAnimal.hpp"

class Cat: public AAnimal{
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