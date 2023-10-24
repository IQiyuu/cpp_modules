#ifndef AFORM
# define AFORM

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    protected:
        std::string const _name;
        bool              _signed;
        int const         _execGrade;
        int const         _signGrade;

    public:
        AForm( std::string const, int, int);
        AForm( void );
        AForm( AForm const & );
        virtual ~AForm( void ) = 0;
        AForm &operator=( AForm const & );

        virtual std::string const getName( void ) const;
        virtual int         getExecGrade( void ) const;
        virtual int         getSignGrade( void ) const;
        virtual bool        isSigned( void ) const;
        virtual void        beSigned( Bureaucrat & ) = 0;

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

std::ostream &operator<<( std::ostream &, AForm const & );

#endif