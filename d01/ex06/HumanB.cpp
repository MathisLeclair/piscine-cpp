#include "HumanB.hpp"

HumanB::HumanB(std::string name):_name(name){
    this->_weapon = NULL;
};

HumanB::~HumanB(){};

void HumanB::attack() const{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
};

void HumanB::setType(std::string type){
    this->_weapon->setType(type);
}

void HumanB::setWeapon(Weapon & weapon){
    this->_weapon = &weapon;
}
