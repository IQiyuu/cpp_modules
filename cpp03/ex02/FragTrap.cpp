#include "FragTrap.hpp"

FragTrap::FragTrap( std::string n ): ClapTrap(n) {
    hp = 100;
    ep = 100;
    dmg = 30;
    name = n;
    std::cout << "FragTrap \x1b[32mconstructed\x1b[0m" << std::endl; 
}

FragTrap::~FragTrap( void ) { std::cout << "FragTrap \x1b[31mdestructed\x1b[0m" << std::endl; }

FragTrap::FragTrap( const FragTrap &n ): ClapTrap(n) { 
	std::cout << "FragTrap copy \x1b[32mconstructed\x1b[0m" << std::endl;
}

void    FragTrap::highFivesGuys( void ) {
    std::cout << "FragTrap " << name << " asked for an HIGH FIVE!" << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap &n ) { 
	std::cout << "assignation" << std::endl;
	if (this != &n)
    {
		this->name = n.getName();
        this->ep = n.getEp();
        this->hp = n.getHp();
        this->dmg = n.getDmg();
    }
	return *this;
}