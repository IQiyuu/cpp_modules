#ifndef IMATERIASRC
# define IMATERIASRC

#include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
        virtual AMateria* getMateria(int idx) = 0;
};

#endif