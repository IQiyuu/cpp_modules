#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const std::string n ): ClapTrap(n) {
    hp = 100;
    ep = 50;
    dmg = 20;
    std::cout << "ScavTrap constructed" << std::endl; 
}

ScavTrap::ScavTrap( const ScavTrap &n ): ClapTrap(n) { 
	std::cout << "ScavTrap copy \x1b[32mconstructed\x1b[0m" << std::endl;
}

ScavTrap::~ScavTrap( void ) { std::cout << "ScavTrap destructed" << std::endl; }

ScavTrap &ScavTrap::operator=( const ScavTrap &n ) { 
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

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " est entre en mode Gate keeper." << std::endl;
}

void    ScavTrap::attack( const std::string& target ) {
    if (ep < 1) {
        std::cout << "ScavTrap " << name << "don't have enought energy point." << std::endl;
        return ;
    }
    ep--;
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << dmg << " points of damage!" << std::endl;
}