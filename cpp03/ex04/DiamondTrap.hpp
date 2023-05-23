#ifndef MONA
# define MONA

    #include "FragTrap.hpp"
    #include "ScavTrap.hpp"

    class   DiamondTrap: public FragTrap, public ScavTrap {
        private:
            std::string name;

        public:
            DiamondTrap( std::string );
            ~DiamondTrap( void );
    };

#endif