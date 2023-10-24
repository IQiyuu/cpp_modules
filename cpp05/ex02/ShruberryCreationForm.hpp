#ifndef SHRU
 #define SHRU

#include "AForm.hpp"

class ShruberryCreationForm: public AForm {
    private:
        std::string const _name;
        bool              _signed;
        int const         _execGrade;
        int const         _signGrade;

    public:
        ShruberryCreationForm( void );
        ShruberryCreationForm( std::string );
        ShruberryCreationForm( ShruberryCreationForm const & );
        ~ShruberryCreationForm( void );
        ShruberryCreationForm	&operator=( ShruberryCreationForm const &);

        std::string const getName( void ) const;
        int         getExecGrade( void ) const;
        int         getSignGrade( void ) const;
        bool        isSigned( void ) const;
        void        beSigned( Bureaucrat & );

        class GradeTooHighException: public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "Grade too high";
                }
            };

        class GradeTooLowException: public std::exception {
                public:
                    virtual const char* what() const throw() {
                        return "Grade too low";
                    }
            };

};

#endif
