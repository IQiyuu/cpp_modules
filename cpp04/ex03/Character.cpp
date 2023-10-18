#include "Character.hpp"

Character::Character( const Character &other ): _name(other._name) { 
    std::cout << "Character copy \x1b[32mcreated\x1b[0m" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = other._inventory[i];
}

Character::Character( const std::string &name ): _name(name) {
    std::cout << "Character " << _name << " \x1b[32mcreated\x1b[0m" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = 0;
}

Character   &Character::operator=( const Character &other ) {
    if (other._inventory != this->_inventory)
        for (int i = 0; i < 4; i++)
            this->_inventory[i] = other._inventory[i];
    return *this;
}

Character::~Character( void ) {
    std::cout << "Character" << _name << " \x1b[31mdeleted\x1b[0m" << std::endl;
}

void    Character::equip( AMateria *mat ) {
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == 0)
        {
            std::cout << _name << "equiped " << std::endl;
            this->_inventory[i] = mat;
            break ;
        }
        else if (i == 3)
            std::cout << "inventory full" << std::endl;
    }
}

void    Character::unequip( int idx ) {
    if (idx < 0 || idx > 3) {
        std::cout << "unavalaible index" << std::endl;
        return ;
    }
    if (this->_inventory[idx] == NULL) {
        std::cout << "this slot is empty" << std::endl;
        return ;
    }
    std::cout << "Materia " << this->_inventory[idx] << " at slot " << idx << " unequiped" << std::endl;
    delete this->_inventory[idx];
    this->_inventory[idx] = NULL;
}

std::string const &Character::getName( void ) const { return this->_name; }

void    Character::use( int idx, ICharacter &target ) {
    if (idx < 0 || idx > 3) {
        std::cout << "unavalaible index" << std::endl;
        return ;
    }
    if (this->_inventory[idx] == NULL) {
        std::cout << "this slot is empty" << std::endl;
        return ;
    }
    this->_inventory[idx]->use(target);
}