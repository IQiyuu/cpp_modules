/* -#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*- */
/* /|\ -_UwU_- /|\                /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\ By: DIEU       /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\                /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\ Contact.cpp    /|\ -_UwU_- /|\ */
/* -#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*- */

#include "Contact.hpp"

Contact::Contact(void) { std::cout << GREEN << "Contact created" << WHITE << std::endl; }

Contact::Contact(const std::string &fname, const std::string &lname, const std::string &nname, const std::string &ph, const std::string &secret):
first_name(fname),last_name(lname),nickname(nname),phone_number(ph),darkest_secret(secret){ std::cout << GREEN << "Contact created" << WHITE << std::endl; }

Contact	&Contact::operator=(const Contact &c)
{ 
	first_name = c.first_name; 
	last_name = c.last_name;
	nickname = c.nickname;
	phone_number = c.phone_number;
	darkest_secret = c.darkest_secret;
	return (*this);
}

Contact::~Contact(){ std::cout << RED << "Contact destructed" << WHITE << std::endl; }

std::string	Contact::getFName(void) const { return (first_name); }
std::string	Contact::getLName(void) const { return (last_name); }
std::string	Contact::getNName(void) const { return (nickname); }
std::string	Contact::getPNbr(void) const { return (phone_number); }
std::string	Contact::getSecret(void) const { return (darkest_secret); }

void	Contact::display_contact(void) const
{
	std::string fn;
	for (int i = 0; i < (int)(10 - first_name.length()); i++)
		fn += " ";
	if (fn.empty() && first_name.length() > 10)
		fn += first_name.substr(0,9) += ". | ";
	else
		fn += first_name + " | ";
	
	std::string ln;
	for (int i = 0; i < (int)(10 - last_name.length()); i++) ln += ' ';
	if (ln.empty() && last_name.length() > 10)
		ln += last_name.substr(0,9) += ". | ";
	else
		ln += last_name + " | ";

	std::string nn;
	for (int i = 0; i < (int)(10 - nickname.length()); i++)
		nn += ' ';
	if (nn.empty() && nickname.length() > 10)
		nn += nickname.substr(0,9) += ". | ";
	else
		nn += nickname + " | ";

	std::string pn;
	for (int i = 0; i < (int)(10 - phone_number.length()); i++)
		pn += ' ';
	if (pn.empty() && phone_number.length() > 10)
		pn += phone_number.substr(0,9) += ". | ";
	else
		pn += phone_number + " | ";
	
	std::string ds;
	for (int i = 0; i < (int)(10 - darkest_secret.length()); i++)
		ds += ' ';
	if (ds.empty() && darkest_secret.length() > 10)
		ds += darkest_secret.substr(0,9) += ".";
	else
		ds += darkest_secret;
	
	std::cout << FONTLESS << fn << ln << nn << pn << ds << std::endl;
}