#ifndef ARTEMIS
# define ARTEMIS

# include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name );
Zombie* newZombie( std::string name);
void    randomChump( std::string name );

#endif