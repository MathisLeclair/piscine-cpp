#include "SuperTrap.hpp"

SuperTrap::SuperTrap():FragTrap(), NinjaTrap(){
    std::cout << "<" << this->getName() << "> Super Trap construct no idea what to write" << std::endl << std::endl;
    this->_hitpoint = FragTrap::_hitpoint;
    this->_maxHitpoint = FragTrap::_maxHitpoint;
    this->_Energy = NinjaTrap::_Energy;
    this->_maxEnergy = NinjaTrap::_maxEnergy;
    this->_mDamage = NinjaTrap::_mDamage;
    this->_rDamage = FragTrap::_rDamage;
    this->_armorDamageReduc = FragTrap::_armorDamageReduc;

}

SuperTrap::SuperTrap(std::string name):FragTrap(name), NinjaTrap(name){
    std::cout << "<" << this->getName() << "> Super Trap construct no idea what to write" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap & src): FragTrap(src), NinjaTrap(src){
    std::cout << "<" << this->getName() << "> Super Trap construct no idea what to write" << std::endl;

    this->_hitpoint = src._hitpoint;
    this->_maxHitpoint = src._maxHitpoint;
    this->_Energy = src._Energy;
    this->_maxEnergy = src._maxEnergy;
    this->_mDamage = src._mDamage;
    this->_rDamage = src._rDamage;
    this->_armorDamageReduc = src._armorDamageReduc;
    this->_name = src._name;

    *this = src;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & src){
    this->_hitpoint = FragTrap::_hitpoint;
    this->_maxHitpoint = FragTrap::_maxHitpoint;
    this->_Energy = NinjaTrap::_Energy;
    this->_maxEnergy = NinjaTrap::_maxEnergy;
    this->_mDamage = NinjaTrap::_mDamage;
    this->_rDamage = FragTrap::_rDamage;
    this->_armorDamageReduc = FragTrap::_armorDamageReduc;
    this->_name = src._name;

    return *this;
}

SuperTrap::~SuperTrap(){
    std::cout << "<" << this->getName() << "> I'll die the way I lived: annoying!(~SuperTrap)" << std::endl;
}
