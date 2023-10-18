#include "Animal.hpp"

Animal::Animal( void ) { std::cout << "Animal \x1b[32mCreated\x1b[0m" << std::endl; }

Animal::~Animal( void ) { std::cout << "Animal \x1b[31mDestructed\x1b[0m" << std::endl; }

std::string Animal::getType( void ) const { return type; }
void    Animal::makeSound( void ) const { std::cout << "ANIMAL" << std::endl; }