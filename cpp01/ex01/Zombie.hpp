#ifndef DIONYSOS
# define DIONYSOS

# include <iostream>
# define GREEN "\x1b[32m"
# define WHITE "\x1b[0m"
# define RED "\x1b[31m"

class Zombie
{
    private:
        std::string name;

    public:
        Zombie( void );
        Zombie( std::string name );
        ~Zombie( void );
        Zombie operator=( const Zombie &);
        void    announce( void );
};

#endif