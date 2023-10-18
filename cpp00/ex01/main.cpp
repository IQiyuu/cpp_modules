#include "PhoneBook.hpp"

int	main()
{
	PhoneBook pb;

	// pb.add_contact("a", "a", "a", "9", "a");
	// pb.add_contact("b", "b", "b", "9", "b");
	// pb.add_contact("c", "c", "c", "9", "c");
	// pb.add_contact("d", "d", "d", "9", "d");
	// pb.add_contact("e", "e", "e", "9", "e");
	// pb.add_contact("f", "f", "f", "9", "f");
	// pb.add_contact("g", "g", "g", "9", "g");
	// pb.add_contact("h", "h", "h", "9", "h");
	std::string in;
	while (in != "EXIT")
	{
		std::cout << "ADD: register a new contact\nSEARCH: display contact's infos\nEXIT: stop this program" << std::endl;
		std::getline(std::cin, in);
		if (std::cin.eof())
			return 0;
		else if (in == "ADD")
			pb.add_contact();
		else if(in == "SEARCH")
			pb.search_contact();
	}
	return 0;
}
