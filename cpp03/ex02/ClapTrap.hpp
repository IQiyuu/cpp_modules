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

            friend std::ostream& operator<<(std::ostream& os, const ClapTrap &c);

            void    attack(const std::string& target);
            void    takeDamage(unsigned int amount);
            void    beRepaired(unsigned int amount);

            unsigned int getDmg();
            unsigned int getHp();
            std::string getName();
    };

#endif