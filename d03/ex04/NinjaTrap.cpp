#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap():ClapTrap(){
    std::cout << "<" << this->getName() << "> I can do more than open doors sir! We CL4P-TP units can be programmed to do anything from open doors to ninja-sassinate highly important Janitory officals!" << std::endl << std::endl;
    this->_hitpoint = 60;
    this->_maxHitpoint = 60;
    this->_Energy = 120;
    this->_maxEnergy = 120;
    this->_mDamage = 60;
    this->_rDamage = 5;
    this->_armorDamageReduc = 0;

}

NinjaTrap::NinjaTrap(std::string name):ClapTrap(name){
    std::cout << "<" << this->getName() << "> I can do more than open doors sir! We CL4P-TP units can be programmed to do anything from open doors to ninja-sassinate highly important Janitory officals!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap & src){
    std::cout << "<" << this->getName() << "> I can do more than open doors sir! We CL4P-TP units can be programmed to do anything from open doors to ninja-sassinate highly important Janitory officals!" << std::endl;

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

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & src){
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

NinjaTrap::~NinjaTrap(){
    std::cout << "<" << this->getName() << "> I'll die the way I lived: annoying!(~NinjaTrap)" << std::endl;
}



void NinjaTrap::rangedAttack(std::string const & target){
    std::cout << "FR4G-TP <" << this->getName() << "> attacks <" << target << "> at range, causing <" << this->_rDamage << "> points of damage !" << std::endl;
    std::cout << "<" << this->getName() << "> Is it dead? Can, can I open my eyes now?" << std::endl;
}
void NinjaTrap::meleeAttack(std::string const & target){
    std::cout << "FR4G-TP <" << this->getName() << "> attacks <" << target << "> at melee, causing <" << this->_mDamage << "> points of damage !" << std::endl;
    std::cout << "<" << this->getName() << "> Take that!" << std::endl;
}


void NinjaTrap::ninjaShoebox(ClapTrap & target){
    std::cout << "I'm a robot ninja... (shoebox target ClapTrap)" << std::endl;
    target.takeDamage(this->_mDamage);
}
void NinjaTrap::ninjaShoebox(NinjaTrap & target){
    std::cout << "I'm a robot ninja... (shoebox target NinjaTrap)" << std::endl;
    target.takeDamage(this->_mDamage);
}
void NinjaTrap::ninjaShoebox(FragTrap & target){
    std::cout << "I'm a robot ninja... (shoebox target FragTrap)" << std::endl;
    target.takeDamage(this->_mDamage);
}
void NinjaTrap::ninjaShoebox(ScavTrap & target){
    std::cout << "I'm a robot ninja... (shoebox target ScavTrap)" << std::endl;
    target.takeDamage(this->_mDamage);
}
