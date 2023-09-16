#include "Zombie.h"

int main( void ) {
    Zombie *a = newZombie("Gilbert");
    randomChump("Robert");
    Zombie *z = newZombie("Bertro");

    a->announce();
    randomChump("Boris");
    z->announce();

    delete(a);
    delete(z);
}