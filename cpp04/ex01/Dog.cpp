#include "Dog.hpp"

Dog::Dog( void ) { 
	brain = new Brain();
	type = "Dog"; 
	std::cout << "Dog \x1b[32mCreated\x1b[0m" << std::endl; 
}

Dog::Dog( const Dog &ref ) {
	type = ref.getType();
	brain = new Brain(*(ref.getBrain()));
}

Dog::~Dog( void ) { 
	std::cout << "Dog \x1b[31mDestructed\x1b[0m" << std::endl;
	delete brain;
}

Dog &Dog::operator=( Dog const & ref )
{
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain;
	this->type = ref.type;
	return *this;
}


void Dog::makeSound() const {
	std::cout << "WOOF\n";
}

std::string Dog::getType( void ) const {
	return (this->type);
}

Brain	*Dog::getBrain( void ) const { 
	return this->brain;
}