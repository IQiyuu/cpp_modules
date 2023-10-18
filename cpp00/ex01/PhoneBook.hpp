#ifndef ZEUS
# define ZEUS

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact **contacts;
		int		index;

	public:
		PhoneBook(void);
		PhoneBook(const PhoneBook&);
		~PhoneBook();
		PhoneBook &operator=(const PhoneBook&);
		void	add_contact(void);
		void	add_contact(std::string, std::string, std::string, std::string, std::string);
		void	search_contact(void);
		int		have_digits(const std::string&, int);
};

#endif
