#include "ClapTrap.hpp"

int main() {
    ClapTrap cp("Didier");
    ClapTrap cp2("Robert");

    std::cout << cp << std::endl;
    std::cout << cp2 << std::endl;
    cp.attack(cp2.getName());
    cp2.takeDamage(cp.getDmg());
    std::cout << cp << std::endl;
    std::cout << cp2 << std::endl;
    cp2.beRepaired(cp.getDmg());
    std::cout << cp << std::endl;
    std::cout << cp2 << std::endl;
    cp.attack(cp2.getName());
    cp2.takeDamage(cp.getDmg());
    cp2.beRepaired(cp.getDmg());
    cp.attack(cp2.getName());
    cp2.takeDamage(cp.getDmg());
    cp2.beRepaired(cp.getDmg());
    cp.attack(cp2.getName());
    cp2.takeDamage(cp.getDmg());
    cp2.beRepaired(cp.getDmg());
    cp.attack(cp2.getName());
    cp2.takeDamage(cp.getDmg());
    cp2.beRepaired(cp.getDmg());
    cp.attack(cp2.getName());
    cp2.takeDamage(cp.getDmg());
    cp2.beRepaired(cp.getDmg());
    cp.attack(cp2.getName());
    cp2.takeDamage(cp.getDmg());
    cp2.beRepaired(cp.getDmg());
    cp.attack(cp2.getName());
    cp2.takeDamage(cp.getDmg());
    cp2.beRepaired(cp.getDmg());
    cp.attack(cp2.getName());
    cp2.takeDamage(cp.getDmg());
    cp.attack(cp2.getName());
    cp2.takeDamage(cp.getDmg());
    cp.attack(cp2.getName());
    return 1;
}