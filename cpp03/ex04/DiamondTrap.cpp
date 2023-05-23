#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string n ): FragTrap(n), ScavTrap(n) {
    hp = 100;
    ep = 10;
    dmg = 30;
    name = n;
    std::cout << "DiamondTrap constructed" << std::endl; 
}

DiamondTrap::~DiamondTrap( void ) { std::cout << "DiamondTrap destructed" << std::endl;  }