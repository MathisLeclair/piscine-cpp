#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap(){
    this->_mDamage = 20;
    this->_rDamage = 15;
    this->_armorDamageReduc = 3;
    std::cout << "<" << this->getName() << "> Booting sequence complete. Hello! I am your new steward bot. Designation: CL4P-TP, Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment." << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
    this->_mDamage = 20;
    this->_rDamage = 15;
    this->_armorDamageReduc = 3;
    std::cout << "<" << this->getName() << "> Let's get this party started!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap & src):ClapTrap(src){
    std::cout << "<" << this->getName() << "> Hey! I'm You!" << std::endl;
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

ScavTrap::~ScavTrap(){
    std::cout << "(~ScavTrap)" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src){
    std::cout << "<" << this->getName() << "> Hey! I'm your brother!" << std::endl;
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


void ScavTrap::rangedAttack(std::string const & target){
    std::cout << "FR4G-TP <" << this->getName() << "> attacks <" << target << "> at range, causing <" << this->_rDamage << "> points of damage !" << std::endl;
    std::cout << "<" << this->getName() << "> Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!" << std::endl;
}
void ScavTrap::meleeAttack(std::string const & target){
    std::cout << "FR4G-TP <" << this->getName() << "> attacks <" << target << "> at melee, causing <" << this->_mDamage << "> points of damage !" << std::endl;
    std::cout << "<" << this->getName() << "> Heh heh heh, squishy bits!" << std::endl;
}

void ScavTrap::challengeNewcomer() const{
    srand(time(NULL));
    int choice = rand() % 4;

    std::cout << "Can I shoot something now? Or climb some stairs? SOMETHING exciting?" << std::endl << "I have an IDEA!" << std::endl;

    if (choice == 0)
        std::cout  << "FR4G-TP <" << this->getName() << "> I'm gonna jump from this hill and see if I can find something cool." << std::endl;
    else if (choice == 1)
        std::cout  << "FR4G-TP <" << this->getName() << "> I hereby challenge you to a dance battle!" << std::endl;
    else if (choice == 2)
        std::cout  << "FR4G-TP <" << this->getName() << "> I think i can drive thi car, I'll try.'" << std::endl;
    else if (choice == 3)
        std::cout  << "FR4G-TP <" << this->getName() << "> You want to challenge me to a duel? You versus me! Me versus you! Either way!" << std::endl;

}
