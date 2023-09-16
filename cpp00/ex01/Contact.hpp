#ifndef ARTEMIS
# define ARTEMIS

# include <iostream>
# include <string>

# define GREEN "\x1b[32m"
# define RED "\x1b[31m"
# define WHITE "\x1b[0m"
# define BOLD "\x1b[2m"
# define FONTLESS ""

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	public:
		Contact(void);
		Contact(const Contact &);
		Contact(const std::string &, const std::string &, const std::string &, const std::string &, const std::string &);
		~Contact();
		Contact &operator=(const Contact&);
		std::string	getFName(void) const;
		std::string	getLName(void) const;
		std::string	getNName(void) const;
		std::string	getPNbr(void) const;
		std::string	getSecret(void) const;
		void	display_contact(void) const;
};

#endif
