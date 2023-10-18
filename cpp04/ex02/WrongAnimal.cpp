#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) { std::cout << "WrongAnimal \x1b[32mCreated\x1b[0m" << std::endl; }

WrongAnimal::~WrongAnimal( void ) { std::cout << "WrongAnimal \x1b[31mDestructed\x1b[0m" << std::endl; }

std::string WrongAnimal::getType( void ) const { return type; }
void    WrongAnimal::makeSound( void ) const { std::cout << "WRONGANIMAL" << std::endl; }