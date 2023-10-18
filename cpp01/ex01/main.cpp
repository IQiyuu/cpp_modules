#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name );

int main( void ) {
    Zombie *a = zombieHorde(5, "Bobby");

	for (int i = 0; i < 5; i++)
		a[i].announce();

    delete []( a );
}