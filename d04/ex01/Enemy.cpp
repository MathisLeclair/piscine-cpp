#include "Enemy.hpp"

Enemy::Enemy(){}

Enemy::Enemy(int hp, std::string const & type):_hp(hp),_type(type){}

Enemy::Enemy(Enemy & src){
    this->_hp = src._hp;
    this->_type = src._type;
}

Enemy::~Enemy(){}

Enemy & Enemy::operator=(Enemy const & src){
    this->_hp = src.getHP();
    this->_type = src.getType();
    return (*this);
}


void Enemy::takeDamage(int damage){
    if (damage <= 0)
        return ;
    if (damage >= this->_hp)
        this->_hp = 0;
    else
        this->_hp -= damage;
}
