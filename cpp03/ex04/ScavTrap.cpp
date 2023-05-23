#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string n ): ClapTrap(n) {
    hp = 10;
    ep = 10;
    dmg = 10;
    name = n;
    std::cout << "ScavTrap constructed" << std::endl; 
}

ScavTrap::~ScavTrap( void ) { std::cout << "ScavTrap destructed" << std::endl; }

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " est entre en mode Gate keeper." << std::endl;
}

void    ScavTrap::attack( const std::string& target ) {
    if (ep < 1) {
        std::cout << "ClapTrap " << name << "don't have enought energy point." << std::endl;
        return ;
    }
    ep--;
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << dmg << " points of damage!" << std::endl;
}