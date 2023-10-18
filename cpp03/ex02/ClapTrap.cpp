#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) { std::cout << "ClapTrap \x1b[32mconstructed\x1b[0m" << std::endl; }

ClapTrap::ClapTrap( std::string name ): hp(10), ep(10), dmg(10), name(name) { std::cout << "ClapTrap \x1b[32mconstructed\x1b[0m" << std::endl; }

ClapTrap::ClapTrap( const ClapTrap &n ) { 
	std::cout << "ClapTrap copy \x1b[32mconstructed\x1b[0m" << std::endl;
	*this = n;
}

ClapTrap::~ClapTrap( void ) { std::cout << "ClapTrap \x1b[31mdestructed\x1b[0m" << std::endl; }

ClapTrap &ClapTrap::operator=( const ClapTrap &n ) { 
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

void    ClapTrap::attack( const std::string &target ) {
    if (ep < 1) {
        std::cout << "ClapTrap " << name << "don't have enought energy point." << std::endl;
        return ;
    }
    ep--;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << dmg << " points of damage." << std::endl;
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
    if (hp < amount)
        hp = 0;
    else
        hp -= amount;
    if (hp == 0)
        std::cout << "ClapTrap " << name << " have taken " << amount << " damages and is now HS." << std::endl;
    else
        std::cout << "ClapTrap " << name << " have taken " << amount << " damages." << std::endl;
}

unsigned int    ClapTrap::getDmg() const { return dmg; }
std::string     ClapTrap::getName() const { return name; }
unsigned int    ClapTrap::getHp() const { return hp; }
unsigned int    ClapTrap::getEp() const { return ep; }

std::ostream	&operator<<(std::ostream& os, const ClapTrap &c) {
	os << c.getName() << ": \n\t- damage:\t " << c.getDmg() << "\n\t- hp:\t\t " << c.getHp() << "\n\t- energy points: " << c.getEp() << std::endl;
	return os;
}