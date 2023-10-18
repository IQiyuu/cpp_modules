#ifndef MATERIASRC
#define MATERIASRC

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

    private:
        AMateria *(_mat[4]);

    public:
        ~MateriaSource();
        MateriaSource( void );
        MateriaSource( const MateriaSource & );
        MateriaSource &operator=( const MateriaSource & );
    
        void learnMateria(AMateria*) ;
        AMateria* createMateria(std::string const & type);
        AMateria* getMateria( int idx );

};

#endif