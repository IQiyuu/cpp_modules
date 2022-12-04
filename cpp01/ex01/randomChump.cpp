#include "Zombie.cpp"

void randomChump( std::string name ) {
    Zombie z = Zombie(name);
    std::cout << name << " is a randomChump" << std::endl;
    z.announce();
}