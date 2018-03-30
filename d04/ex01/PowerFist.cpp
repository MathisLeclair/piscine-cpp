#include "PowerFist.hpp"

PowerFist::PowerFist():AWeapon("Power Fist Rifle", 50, 8){}

PowerFist::PowerFist(std::string const & name, int apcost, int damage){
    this->_name = name;
    this->_damage = damage;
    this->_apcost = apcost;
}

PowerFist::PowerFist(PowerFist & src){
    this->_name = src._name;
    this->_apcost = src._apcost;
    this->_damage = src._damage;
}

PowerFist::~PowerFist(){}

PowerFist & PowerFist::operator=(PowerFist const & src){
    this->_name = src._name;
    this->_damage = src._damage;
    this->_apcost = src._apcost;
    return *this;
}

std::string PowerFist::getName() const{return this->_name;}
int PowerFist::getAPCost() const { return this->_apcost;}
int PowerFist::getDamage() const { return this->_damage;}


void PowerFist::attack() const{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
