#include "Character.hpp"

Character::Character(){
    std::cout << "* click click click *" << std::endl;
}

Character::Character(Character & src){
    this->_name = src._name;
    this->_weapon = src._weapon;
    this->_ap = src._ap;
    std::cout << "* click click click *" << std::endl;
}

Character::~Character(){
    std::cout << "* SPROTCH *" << std::endl;
}

Character & Character::operator=(Character const & src){
    this->_name = src.getName();
    this->_weapon = src._weapon;
    this->_ap = src._ap;
    return *this;
}

std::string Character::getName()const {return this->_name;}
int Character::getAp()const {return this->_ap;}
