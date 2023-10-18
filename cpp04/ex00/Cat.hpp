#ifndef CAT
# define CAT

#include "Animal.hpp"

class Cat: public Animal{
    private:
        std::string type;

    public:
        Cat( void );
        ~Cat( void );

        std::string getType( void ) const;
        void    makeSound( void ) const;
};

#endif