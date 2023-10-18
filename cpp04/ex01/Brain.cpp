#include "Brain.hpp"

Brain::Brain( void ) {
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "random";
    std::cout << "Brain \x1b[32mCreated\x1b[0m" << std::endl;
}

Brain::Brain( Brain &ref ) {
    std::string *refid = ref.getIdeas();
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = refid[i];
}

Brain::~Brain( void ) {
    delete []this->ideas;
    std::cout << "Brain \x1b[31mDeleted\x1b[0m" << std::endl;
}

Brain &Brain::operator=(Brain const & ref)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ref.ideas[i];
	return *this;
}

std::string *Brain::getIdeas( void ) {
    return this->ideas;
}
