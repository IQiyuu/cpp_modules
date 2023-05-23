#ifndef MARKO
# define MARKO

# include <iostream>
# define GREEN "\x1b[32m"
# define WHITE "\x1b[0m"
# define RED "\x1b[31m"

class Harl
{
    public:
        Harl( void );
        ~Harl( void );
        Harl 	operator=( const Harl &);
        void    complain( std::string level );
        void    debug( void );
        void    error( void );
        void    warning( void );
        void    info( void );
};

#endif