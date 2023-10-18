#include "Dog.hpp"

Dog::Dog( void ) { type = "Dog"; std::cout << "Dog \x1b[32mCreated\x1b[0m" << std::endl; }

Dog::~Dog( void ) { std::cout << "Dog \x1b[31mDestructed\x1b[0m" << std::endl; }

void Dog::makeSound() const {
	std::cout << "MEOW\n";
}

std::string Dog::getType( void ) const {
	return (this->type);
}