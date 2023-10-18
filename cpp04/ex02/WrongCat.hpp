#ifndef WRONGCAT
# define WRONGCAT

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
    private:
        std::string type;

    public:
        WrongCat( void );
        ~WrongCat( void );

        std::string getType( void ) const;
        void    makeSound( void ) const;
};

#endif