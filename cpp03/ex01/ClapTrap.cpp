#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ): hp(10), ep(10), dmg(10), name(name) { std::cout << "ClapTrap constructed" << std::endl; }

ClapTrap::ClapTrap( const ClapTrap &n ) { 
	std::cout << "ClapTrap copy constructed" << std::endl;
	*this = n;
}

ClapTrap::~ClapTrap( void ) { std::cout << "ClapTrap destructed" << std::endl; }

void    ClapTrap::attack( const std::string &target ) {
    if (ep < 1) {
        std::cout << "ClapTrap " << name << "don't have enought energy point." << std::endl;
        return ;
    }
    ep--;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << dmg << " points of damage!" << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount ) {
    if (ep < 1) {
        std::cout << "ClapTrap " << name << " don't have enought energy point." << std::endl;
        return ;
    }
    hp += amount;
    ep--;
    std::cout << "ClapTrap " << name << " have been repaired by " << amount << " points." << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    if (hp == 0) {
        std::cout << "ClapTrap " << name << " is already HS " << std::endl;
        return ;
    }
    hp -= amount;
    if (hp < 0)
        hp = 0;
    if (hp == 0)
        std::cout << "ClapTrap " << name << " have taken " << amount << " damages and is now HS." << std::endl;
    else
        std::cout << "ClapTrap " << name << " have taken " << amount << " damages." << std::endl;
}

unsigned int    ClapTrap::getDmg() { return dmg; }
std::string     ClapTrap::getName() { return name; }
unsigned int    ClapTrap::getHp() { return hp; }

std::ostream	&operator<<(std::ostream& os, const ClapTrap &c) {
	os << c.name << ": \n\t- damage:\t " << c.dmg << "\n\t- hp:\t\t " << c.hp << "\n\t- energy points: " << c.ep << std::endl;
	return os;
}