#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N){
    this->_zHorde = new Zombie[N];
}

ZombieHorde::~ZombieHorde(){
    delete this->_zHorde;
}
