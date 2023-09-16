#include <iostream>

int main( void ) {
	std::string		s = "HI THIS IS BRAIN";
    std::string*	stringPTR = &s;
	std::string&	stringREF = s;

	std::cout << "adresse de la string => " << &s << std::endl;
	std::cout << "adresse du pointeur de la string => " << &stringPTR << std::endl;
	std::cout << "adresse de la reference de la string =>" << &stringREF << std::endl;

	std::cout << "\n\nla valeur de la string => " << s << std::endl;
	std::cout << "la valeur du pointeur de la string => " << *stringPTR << std::endl;
	std::cout << "la valeur de la reference de la string => " << stringREF << std::endl;
}