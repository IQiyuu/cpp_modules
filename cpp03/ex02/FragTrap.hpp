#ifndef SKULL
# define SKULL

    #include "ClapTrap.hpp"

    class FragTrap: public ClapTrap{
        private:
            FragTrap( void );

        public:
            FragTrap( std::string );
            ~FragTrap( void );
            FragTrap( const FragTrap & );
            FragTrap	&operator=( const FragTrap & );

            void    highFivesGuys( void );
    };


#endif