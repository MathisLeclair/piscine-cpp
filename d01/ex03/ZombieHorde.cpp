#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N):_nbZ(N){
    this->_zHorde = new Zombie[N];
}

ZombieHorde::~ZombieHorde(){
        delete[] _zHorde;
}

void    ZombieHorde::annouce(){
    for (int i = 0; i < _nbZ; i++) {
        this->_zHorde[i].announce();
    }
}
