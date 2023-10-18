#include "AAnimal.hpp"

AAnimal::AAnimal( void ) { std::cout << "Animal \x1b[32mCreated\x1b[0m" << std::endl; }

AAnimal::~AAnimal( void ) { std::cout << "Animal \x1b[31mDestructed\x1b[0m" << std::endl; }

std::string AAnimal::getType( void ) const { return type; }
void    AAnimal::makeSound( void ) const { std::cout << "ANIMAL" << std::endl; }