#ifndef ARSENE
# define ARSENE

    #include "ClapTrap.hpp"

    class ScavTrap: public ClapTrap{
        public:
            ScavTrap( std::string );
            ~ScavTrap( void );
            void    attack( const std::string& );
            void    guardGate();
    };


#endif