#ifndef WRONGANIMAL
# define WRONGANIMAL

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal( void );
        virtual ~WrongAnimal( void );

        virtual std::string getType( void ) const;
        void    makeSound( void ) const;
};


#endif