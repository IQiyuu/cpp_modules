#include "WrongCat.hpp"

WrongCat::WrongCat( void ) { type = "WrongCat"; std::cout << "WrongCat \x1b[32mCreated\x1b[0m" << std::endl; }

WrongCat::~WrongCat( void ) { std::cout << "WrongCat \x1b[31mDestructed\x1b[0m" << std::endl; }

void WrongCat::makeSound() const {
	std::cout << "WRONGMEOW\n";
}

std::string WrongCat::getType( void ) const {
	return (this->type);
}