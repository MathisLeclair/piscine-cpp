#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_hitpoint(100),_maxHitpoint(100),_Energy(100),_maxEnergy(100),_level(1),_name("ClapTrap"),_mDamage(30),_rDamage(20),_armorDamageReduc(5){
    std::cout << "A new ClapTrap as been born" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_hitpoint(100),_maxHitpoint(100),_Energy(100),_maxEnergy(100),_level(1),_name(name),_mDamage(30),_rDamage(20),_armorDamageReduc(5){
    std::cout << "A new ClapTrap as been born" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap & src){

    std::cout << "A new ClapTrap as been born" << std::endl;
    this->_hitpoint = src._hitpoint;
    this->_maxHitpoint = src._maxHitpoint;
    this->_Energy = src._Energy;
    this->_maxEnergy = src._maxEnergy;
    this->_level = src._level;
    this->_mDamage = src._mDamage;
    this->_rDamage = src._rDamage;
    this->_armorDamageReduc = src._armorDamageReduc;
    this->_name = src._name;

    *this = src;
}

ClapTrap::~ClapTrap(){
    std::cout << "I'm too pretty to die!(~claptrap)" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src){
    this->_hitpoint = src._hitpoint;
    this->_maxHitpoint = src._maxHitpoint;
    this->_Energy = src._Energy;
    this->_maxEnergy = src._maxEnergy;
    this->_level = src._level;
    this->_mDamage = src._mDamage;
    this->_rDamage = src._rDamage;
    this->_armorDamageReduc = src._armorDamageReduc;
    this->_name = src._name;

    return *this;
}

void ClapTrap::rangedAttack(std::string const & target){
    std::cout << "FR4G-TP <" << this->getName() << "> attacks <" << target << "> at range, causing <" << this->_rDamage << "> points of damage !" << std::endl;
    std::cout << "<" << this->getName() << "> ClapTrap shotgun special attack!!" << std::endl;
}
void ClapTrap::meleeAttack(std::string const & target){
    std::cout << "FR4G-TP <" << this->getName() << "> attacks <" << target << "> at melee, causing <" << this->_mDamage << "> points of damage !" << std::endl;
    std::cout << "<" << this->getName() << "> ClapTrap super metalic slap!!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "FR4G-TP <" << this->getName() << "> receive attack, causing <" << amount << "> points of damage !" << std::endl;
    std::cout << "<" << this->getName() << "> I can't feel my fingers! Gah! I don't have any fingers!" << std::endl;

    this->_hitpoint -= amount - this->_armorDamageReduc;
    this->_hitpoint = this->_hitpoint > 0 ? this->_hitpoint : 0;
    std::cout << "FR4G-TP <" << this->getName() << "> The robot is dead, long live the robot! <" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount){
    std::cout << "FR4G-TP <" << this->getName() << "> is repaired, causing <" << amount << "> points of health gained !" << std::endl;
    std::cout << "<" << this->getName() << "> You're the wub to my dub!" << std::endl;

    if (amount + this->_hitpoint >= this->_maxHitpoint)
        this->_hitpoint = this->_maxHitpoint;
    else
        this->_hitpoint += amount;
}


int ClapTrap::getHitpoint() const {
    return this->_hitpoint;
}
int ClapTrap::getEnergy() const {
    return this->_Energy;
}
int ClapTrap::getlevel() const {
    return this->_level;
}
int ClapTrap::getmDamage() const {
    return this->_mDamage;
}
int ClapTrap::getrDamage() const {
    return this->_rDamage;
}
std::string ClapTrap::getName() const {
    return this->_name;
}
