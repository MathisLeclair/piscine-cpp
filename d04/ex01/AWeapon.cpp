#include "AWeapon.hpp"

AWeapon::AWeapon(){}

AWeapon::AWeapon(std::string const & name, int apcost, int damage):_name(name),_damage(damage),_apcost(apcost){}

AWeapon::AWeapon(AWeapon & src):_name(src._name),_damage(src._damage),_apcost(src._apcost){}

AWeapon::~AWeapon(){}

AWeapon & AWeapon::operator=(AWeapon const & src){
    this->_name = src._name;
    this->_damage = src._damage;
    this->_apcost = src._apcost;
    return *this;
}

std::string AWeapon::getName() const{return this->_name;}
int AWeapon::getAPCost() const { return this->_apcost;}
int AWeapon::getDamage() const { return this->_damage;}
