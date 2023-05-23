#ifndef SKULL
# define SKULL

    #include "ClapTrap.hpp"

    class FragTrap: public ClapTrap{
        public:
            FragTrap( std::string );
            ~FragTrap( void );
            void    highFivesGuys( void );
    };


#endif