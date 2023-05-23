/* -#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*- */
/* /|\ -_UwU_- /|\                /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\ By: DIEU       /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\                /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\ megaphone.cpp  /|\ -_UwU_- /|\ */
/* -#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*- */

#include <iostream>
#include <string>

std::string	to_lower(char *str)
{
	std::string s(str);

	for(int i = 0; s[i]; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';
	return (s);
}

int	main(int ac, char *av[])
{
	if (ac >= 2)
	{
		for(int i = 1; i < ac; i++)
			std::cout << to_lower(av[i]);
		std::cout << std::endl;
	}
	else
		std::cout << "sejfbksbfksb gjhksbhkbkhdsbhksbdfkhsdbfhb vhk ngkhesb f" << std::endl;
}
