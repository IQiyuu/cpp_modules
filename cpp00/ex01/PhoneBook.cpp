/* -#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*- */
/* /|\ -_UwU_- /|\                /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\ By: DIEU       /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\                /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\ PhoneBook.cpp  /|\ -_UwU_- /|\ */
/* -#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*- */

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
	std::cout << "     index | first name |  last name |   nickname | phone num. |     secret" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (index > 8 || (index < 8 && i < index))
		{
			std::cout << "         " << i << " | ";
			contacts[i]->display_contact();
		}
	}

	std::string sindex;
	int			ain = -1;
	while (ain < 0 || ain > index){
		std::cout << "\nChose the contact index: ";
		std::cin >> sindex;
		if (sindex.length() == 1)
			ain = sindex[0] - 48;
	}
	std::cout << BOLD << "first name: " << WHITE << contacts[ain]->getFName() << std::endl;
	std::cout << BOLD << "last name: " << WHITE << contacts[ain]->getLName() << std::endl;
	std::cout << BOLD << "nickname: " << WHITE << contacts[ain]->getNName() << std::endl;
	std::cout << BOLD << "Phone number: " << WHITE <<  contacts[ain]->getPNbr() << std::endl;
	std::cout << BOLD << "Darkest secret: " << WHITE << contacts[ain]->getSecret() << std::endl;
}

void	PhoneBook::add_contact(void)
{
	if (index >= 8 && index % 8 == 0)
	{
		delete(contacts[index % 8]);
		std::cout << "The last contact will be destroyed (" << contacts[index % 8]->getFName() << ")." << std::endl;
	}
	std::string	fn;
	while (fn.empty()){
		std::cout << "\nFirst Name: ";
		std::cin >> fn;
	}

	std::string ln;
	while (ln.empty()){
		std::cout << "\nLast Name: ";
		std::cin >> ln;
	}
	
	std::string nn;
	while (nn.empty()){
	std::cout << "\nNickname Name: ";
	std::cin >> nn;
	}

	std::string pn;
	while (pn.empty()){
	std::cout << "\nPhone Name: ";
	std::cin >> pn;
	}

	std::string ds;
	while (ds.empty()){
		std::cout << "\nDarkest secret: ";
		std::cin >> ds;
	}
	contacts[index++ % 8] = new Contact(fn, ln, nn, pn, ds);
}