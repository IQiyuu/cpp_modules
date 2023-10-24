#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	contacts = new Contact*[8];
	index = 0;
	std::cout << GREEN << "PhoneBook created" << WHITE << std::endl; 
}

PhoneBook &PhoneBook::operator=(const PhoneBook &pb){ 
	*contacts = *pb.contacts; 
	return (*this);
}

PhoneBook::~PhoneBook(){
	for (int i = 0; i < 8; i++)
		if ((index < 8 && i < index) || index > 8) delete contacts[i];
	delete contacts;
	std::cout << RED << "PhoneBook destructed" << WHITE << std::endl; 
}

void	PhoneBook::search_contact(void)
{
	if (index < 1)
	{
		std::cout << RED << "	No contact in the phonebook." << WHITE << std::endl;
		return ;
	}
	std::cout << "     index | first name |  last name |   nickname |" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (index > 8 || (index <= 8 && i < index))
		{
			std::cout << "         " << i << " | ";
			contacts[i]->display_contact();
		}
	}

	std::string sindex;
	int			ain = -1;
	while (ain < 0 || ain > index - 1){
		std::cout << "\nChose the contact index: ";
		if (std::getline(std::cin, sindex) && sindex.length() == 1)
			ain = sindex[0] - 48;
	}
	std::cout << BOLD << "first name: " << WHITE << contacts[ain]->getFName() << std::endl;
	std::cout << BOLD << "last name: " << WHITE << contacts[ain]->getLName() << std::endl;
	std::cout << BOLD << "nickname: " << WHITE << contacts[ain]->getNName() << std::endl;
	std::cout << BOLD << "phone number: " << WHITE << contacts[ain]->getPNbr() << std::endl;
	std::cout << BOLD << "darkest secret: " << WHITE << contacts[ain]->getSecret() << std::endl;
}

int	PhoneBook::have_digits(const std::string &str, int only){
	if (!only)
	{
		for (int i = 0; str[i]; i++)
			if (str[i] >= '0' && str[i] <= '9')
				return (1);
		return (0);
	}
	for (int i = 0; str[i]; i++)
		if (str[i] < '0' || str[i] > '9')
			return (0);
	return (1);
}

void	PhoneBook::add_contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds){
	contacts[index++ % 8] = new Contact(fn, ln, nn, pn, ds);
	std::cout << index << std::endl;
}

void	PhoneBook::add_contact(void)
{
	if (index >= 8 && index % 8 == 0)
	{
		std::cout << "The last contact will be destroyed (" << contacts[index % 8]->getFName() << ")." << std::endl;
		delete(contacts[index % 8]);
	}

	std::string	fn = "";
	while (fn.empty() || (!fn.empty() && have_digits(fn, 0))){
		std::cout << "\nFirst Name: ";
		if (std::getline(std::cin, fn) && !fn.empty() && !have_digits(fn, 0))
			break ;
	}

	std::string ln;
	while (ln.empty() || (!ln.empty() && have_digits(ln, 0))){
		std::cout << "\nLast Name: ";
		std::getline(std::cin, ln);
		if (std::cin.eof() && !ln.empty() && !have_digits(ln, 0))
			break ;
	}
	
	std::string nn;
	while (nn.empty() || (!nn.empty() && have_digits(nn, 0))){
	std::cout << "\nNickname Name: ";
			if (std::getline(std::cin, nn) && !nn.empty() && !have_digits(nn, 0))
			break ;
	}

	std::string pn;
	while (pn.empty() || (!pn.empty() && !have_digits(pn, 1))){
		std::cout << "\nPhone Number: ";
			if (std::getline(std::cin, pn) && !pn.empty() && have_digits(pn, 1))
				break ;
	}

	std::string ds;
	while (ds.empty()){
		std::cout << "\nDarkest secret: ";
		if (std::getline(std::cin, ds) && !ds.empty())
			break ;
	}
	contacts[index++ % 8] = new Contact(fn, ln, nn, pn, ds);
}