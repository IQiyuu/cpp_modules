#include "FragTrap.hpp"

FragTrap::FragTrap( std::string n ): ClapTrap(n) {
    hp = 100;
    ep = 100;
    dmg = 30;
    name = n;
    std::cout << "FragTrap constructed" << std::endl; 
}

FragTrap::~FragTrap( void ) { std::cout << "FragTrap destructed" << std::endl; }

void    FragTrap::highFivesGuys( void ) {
    std::cout << "FragTrap " << name << " asked for an HIGH FIVE!" << std::endl;
}