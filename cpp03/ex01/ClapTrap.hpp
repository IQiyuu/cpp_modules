#ifndef JOKER
# define JOKER
    
    #include <iostream>
    class ClapTrap{
        protected:
            unsigned int	hp, ep, dmg;
            std::string  name;

        public:
            ClapTrap( std::string name );
            ClapTrap( const ClapTrap & );
            ~ClapTrap( void );
            ClapTrap	&operator=( const ClapTrap & );

            void    attack(const std::string& target);
            void    takeDamage(unsigned int amount);
            void    beRepaired(unsigned int amount);

            unsigned int getDmg( void ) const;
            unsigned int getHp( void ) const;
            unsigned int getEp( void ) const;
            std::string getName( void ) const;
    };

    std::ostream& operator<<(std::ostream& os, const ClapTrap &c);

#endif