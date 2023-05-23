/* -#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*- */
/* /|\ -_UwU_- /|\                /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\ By: DIEU       /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\                /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\ Zombie.cpp     /|\ -_UwU_- /|\ */
/* -#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*- */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ): name(name) { 
    std::cout << "Zombie {" << name << "}" << GREEN << " created" << std::endl;
}

Zombie::~Zombie( void ){
	std::cout << "Zombie {" << name << "}" << RED << " deleted" << std::endl;
}

Zombie  Zombie::operator=( const Zombie &zombie ) {
    name = zombie.name;
    return ( *this );
}

void    Zombie::announce( void ) {
    std::cout << name << ": BraiiiiiiinnnnnnzzzzzZ" << std::endl;
}