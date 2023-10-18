#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
    std::cout << "new Materia source \x1b[32mcreated\x1b[0m" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_mat[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &other ) { 
    std::cout << "new Materia source copy \x1b[32mcreated\x1b[0m" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_mat[i] = other._mat[i];
}

MateriaSource::~MateriaSource( void ) {
    std::cout << "Materia source \x1b[31mdeleted\x1b[0m" << std::endl;
    for (int i = 0; i < 4; i++)
        if (this->_mat[i] != NULL)
            delete this->_mat[i];
}

MateriaSource   &MateriaSource::operator=( const MateriaSource &other ) {
    if (other._mat != this->_mat)
    {
        for (int i = 0; i < 4; i++)
            if (this->_mat[i] != NULL)
                delete this->_mat[i];
        for (int i = 0; i < 4; i++)
            this->_mat[i] = other._mat[i];
    }
    return *this;
}

void    MateriaSource::learnMateria( AMateria *n ) {
    std::cout << "learning " << n->getType() << std::endl;
    for (int i = 0; i < 4; i++) {
        if (this->_mat[i] == NULL)
        {
            this->_mat[i] = n;
            break ;
        }
        else if (i == 4)
            std::cout << "this source can't learn more Materia" << std::endl;
    }
}

AMateria*   MateriaSource::createMateria( std::string const &type ) {
    for (int i = 0; i < 4; i++)
        if (this->_mat[i] != NULL && this->_mat[i]->getType() == type)
            return this->_mat[i]->clone();
    std::cout << "Unknow Materia type" << std::endl;
    return 0;
}

AMateria    *MateriaSource::getMateria( int idx ) {
    return this->_mat[idx];
}