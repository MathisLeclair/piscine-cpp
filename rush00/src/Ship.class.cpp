#include "Ship.class.hpp"

Ship::Ship():AGameEntities(),_projectile(FORM_PROJECTILE){}

Ship::Ship(int x, int y, int form) : AGameEntities(x, y, form), _projectile(FORM_PROJECTILE){
}

Ship::Ship(Ship & src):AGameEntities(src){}

Ship::~Ship(){}

Ship & Ship::operator=(Ship const & src){
    this->AGameEntities::operator=(src);
    this->_projectile = src.getProjectile();
	return *this;
}

int const & Ship::getProjectile()const{return this->_projectile;}

Projectile* Ship::shoot(int x, int y, int dir){
    Projectile *proj = new Projectile(x,y, dir);
    return (proj);
}
