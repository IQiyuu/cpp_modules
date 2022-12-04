
#include "Zombie.hpp"
#include "newZombie.cpp"
#include "randomChump.cpp"
#include "zombieHorde.cpp"

int main( void ) {
    Zombie *a = zombieHorde(5, "Bobby");
    randomChump("Robert");
    Zombie *z = newZombie("Bertro");

    a->announce();
    randomChump("Boris");
    z->announce();

    for (int i = 0; i < 5; i++)
        delete( a );
    delete( z );
}