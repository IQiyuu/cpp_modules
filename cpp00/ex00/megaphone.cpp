#include <iostream>
#include <string>

std::string	to_upper(char *str)
{
	std::string s(str);

	for(int i = 0; s[i]; i++)
		s[i] = (char)toupper(s[i]);
	return (s);
}

int	main(int ac, char *av[])
{
	if (ac >= 2)
	{
		for(int i = 1; i < ac; i++)
			std::cout << to_upper(av[i]);
		std::cout << std::endl;
	}
	else
		std::cout << "sejfbksbfksb gjhksbhkbkhdsbhksbdfkhsdbfhb vhk ngkhesb f" << std::endl;
}
