#include "ScavTrap.hpp"

int main() {
    ClapTrap cp2("Robert");
    ScavTrap sc("Mimi");

    std::cout << sc << std::endl;
    std::cout << cp2 << std::endl;
    sc.attack(cp2.getName());
    cp2.takeDamage(sc.getDmg());
    std::cout << sc << std::endl;
    std::cout << cp2 << std::endl;
    sc.beRepaired(10);
    std::cout << sc << std::endl;
    sc.guardGate();
    return 0;
}