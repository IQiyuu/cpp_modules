#include "Cat.hpp"

Cat::Cat( void ): type("Cat") { 
	brain = new Brain();
	std::cout << "Cat \x1b[32mCreated\x1b[0m" << std::endl;
}

Cat::Cat( const Cat &ref ): type(ref.type) {
	std::cout << ref.type << " copy \x1b[32mCreated\x1b[0m" << std::endl;
	brain = ref.brain;
}

Cat::~Cat( void ) { 
	std::cout << "Cat \x1b[31mDestructed\x1b[0m" << std::endl;
	delete brain;
}

Cat &Cat::operator=( Cat const & ref )
{
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain;
	this->type = ref.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "MEOW\n";
}

std::string Cat::getType( void ) const {
	return (this->type);
}

Brain *Cat::getBrain( void ) const {
	return (this->brain);
}