#include "Zombie.hpp"
#include "Zombie.h"

int main( void ) {
    Zombie *a = zombieHorde(5, "Bobby");
    randomChump("Robert");
    Zombie *z = newZombie("Bertro");

    a->announce();
	for (int i = 0; i < 5; i++)
		a[i].announce();
    randomChump("Boris");
    z->announce();

    delete []( a );
    delete( z );
}