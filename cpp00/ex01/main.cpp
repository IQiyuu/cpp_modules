#include "PhoneBook.hpp"

int	main()
{
	PhoneBook pb;
	std::string in;
	while (1)
	{
		std::cout << "ADD: register a new contact\nSEARCH: display contact's infos\nEXIT: stop this program" << std::endl;
		std::getline(std::cin, in);
		if (in == "ADD")
			pb.add_contact();
		else if(in == "SEARCH")
			pb.search_contact();
		else if (in == "EXIT")
			return (0);
	}
}
