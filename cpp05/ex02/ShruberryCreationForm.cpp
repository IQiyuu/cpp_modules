#include "ShruberryCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm( void ): _name("shru form"), _signed(false), _execGrade(137), _signGrade(145) {
    std::cout << "Shrumachin \033[32mcreated\033[0m" << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm( std::string name ): _name(name), _signed(false), _execGrade(137), _signGrade(145) {
    std::cout << "Shrumachin \033[32mcreated\033[0m" << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm( ShruberryCreationForm const &ref ): _name(ref._name), _signed(ref._signed), _execGrade(ref._execGrade), _signGrade(ref._signGrade) {
    std::cout << "Shrumachin copy \033[32mcreated\033[0m" << std::endl;
}

ShruberryCreationForm &ShruberryCreationForm::operator=( ShruberryCreationForm const &ref ) {
    this->_signed = ref._signed;
    return *this;
}

std::string const ShruberryCreationForm::getName( void ) const {
    return this->_name;
}

int ShruberryCreationForm::getExecGrade( void ) const {
    return this->_execGrade;
}

int ShruberryCreationForm::getSignGrade( void ) const {
    return this->_signGrade;
}

bool    ShruberryCreationForm::isSigned( void ) const {
    return this->_signed;
}

void    ShruberryCreationForm::beSigned( Bureaucrat &ref ) {
    if (ref.getGrade() > this->_signGrade)
        throw GradeTooLowException();
    this->_signed = true;
}