#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():AWeapon("Plasma Rifle", 21, 5){}

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage){
    this->_name = name;
    this->_damage = damage;
    this->_apcost = apcost;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle & src){
    this->_name = src._name;
    this->_apcost = src._apcost;
    this->_damage = src._damage;
}

PlasmaRifle::~PlasmaRifle(){}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & src){
    this->_name = src._name;
    this->_damage = src._damage;
    this->_apcost = src._apcost;
    return *this;
}

std::string PlasmaRifle::getName() const{return this->_name;}
int PlasmaRifle::getAPCost() const { return this->_apcost;}
int PlasmaRifle::getDamage() const { return this->_damage;}


void PlasmaRifle::attack() const{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
