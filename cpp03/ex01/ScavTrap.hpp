#ifndef ARSENE
# define ARSENE

    #include "ClapTrap.hpp"

    class ScavTrap: public ClapTrap {
        private:
            ScavTrap( void );

        public:
            ScavTrap( const std::string );
            ScavTrap( const ScavTrap & );
            ~ScavTrap( void );
            ScavTrap	&operator=( const ScavTrap & );

            void    attack( const std::string& );
            void    guardGate();
    };

#endif