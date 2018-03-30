#include "Character.hpp"

Character::Character():_name("Potatoe"),_weapon(NULL),_ap(40){}

Character::Character(std::string const & name):_name(name),_weapon(NULL),_ap(40){}

Character::Character(Character & src){
    this->_name = src._name;
    this->_weapon = src._weapon;
    this->_ap = src._ap;
    std::cout << "* click click click *" << std::endl;
}

Character::~Character(){
}

Character & Character::operator=(Character const & src){
    this->_name = src.getName();
    this->_weapon = src._weapon;
    this->_ap = src._ap;
    return *this;
}

std::string Character::getName()const {return this->_name;}
int Character::getAp()const {return this->_ap;}
AWeapon *Character::getWeapon()const {return this->_weapon;}

void Character::recoverAP(){
    this->_ap += 10;
    if (this->_ap > 40)
        this->_ap = 40;
}

void Character::attack(Enemy* e){
    if (!this->_weapon || this->_ap < this->_weapon->getAPCost())
        return ;
    std::cout << this->_name << " attacks " << e->getType() <<" with a " << this->_weapon->getName() << std::endl;
    this->_weapon->attack();
    e->takeDamage(this->_weapon->getDamage());
    this->_ap -= this->_weapon->getAPCost();
    if (e->getHP() <= 0)
        delete(e);
}

void Character::equip(AWeapon* weapon){
    this->_weapon = weapon;
}


std::ostream & operator<<(std::ostream & o, Character const & src){
    if (src.getWeapon() == NULL)
        o << src.getName() << " has " << src.getAp() << " AP and wields no weapon " << std::endl;
    else
        o << src.getName() << " has " << src.getAp() << " AP and wields a " << src.getWeapon()->getName() << std::endl;
    return o;
}
