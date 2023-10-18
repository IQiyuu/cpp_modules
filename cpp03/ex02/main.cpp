#include "FragTrap.hpp"

int main() {
    ClapTrap cp2("Robert");
    FragTrap fp("Popi");

    std::cout << fp << std::endl;
    std::cout << cp2 << std::endl;
    fp.attack(cp2.getName());
    cp2.takeDamage(fp.getDmg());
    std::cout << fp << std::endl;
    std::cout << cp2 << std::endl;
    fp.beRepaired(10);
    std::cout << fp << std::endl;
    fp.highFivesGuys();
    return 0;
}