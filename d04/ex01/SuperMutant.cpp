#include "SuperMutant.hpp"

SuperMutant::SuperMutant():Enemy(170,"Super Mutant"){
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant & src){
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    this->_hp = src.getHP();
    this->_type = src.getType();
}

SuperMutant::~SuperMutant(){
    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & src){
    this->_hp = src.getHP();
    this->_type = src.getType();
    return *this;
}

void SuperMutant::takeDamage(int damage){
    damage -= 3;
    if (damage <= 0)
        return ;
    if (damage >= this->_hp)
        this->_hp = 0;
    else
        this->_hp -= damage;
}
