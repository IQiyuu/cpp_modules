#include "Cat.hpp"

Cat::Cat( void ) { type = "Cat"; std::cout << "Cat \x1b[32mCreated\x1b[0m" << std::endl; }

Cat::~Cat( void ) { std::cout << "Cat \x1b[31mDestructed\x1b[0m" << std::endl; }

void Cat::makeSound() const {
	std::cout << "MEOW\n";
}

std::string Cat::getType( void ) const {
	return (this->type);
}