#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type):_type(type){
}

ZombieEvent::~ZombieEvent(){
}

void ZombieEvent::setZombieType(std::string type){
    this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name){
    return (new Zombie(name, this->_type));
}
