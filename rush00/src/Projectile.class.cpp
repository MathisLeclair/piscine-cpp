#include "Projectile.class.hpp"

Projectile::Projectile():AGameEntities(0,0, FORM_PROJECTILE),_damage(100),_direction(KEY_UP){
	setColor(4);
}

Projectile::Projectile(int x, int y, int direction):AGameEntities(x, y, FORM_PROJECTILE),_damage(100),_direction(direction){
    this->_pos[0] = x;
    this->_pos[1] = y;
	setColor(4);
}

Projectile::Projectile(Projectile const & src):AGameEntities(src){
}

Projectile::~Projectile(){}

Projectile & Projectile::operator=(Projectile const & src){
    //Missing stuff ?
    this->_damage = src.getDamage();
    this->_direction = src.getDirection();
	this->_pos[0] = src.getPos(0);
    this->_pos[1] = src.getPos(1);
    return *this;
}

int Projectile::getDamage()const{ return this->_damage; }
int Projectile::getDirection()const{ return this->_direction; }

bool Projectile::nextFrame( int i ) {
    (void)i;
    if (this->_direction == KEY_UP && _pos[1] < LINES && _pos[1] >= -1)
        _pos[1]--;
    else if (this->_direction != KEY_UP && _pos[1] < LINES && _pos[1] >= -1)
        _pos[1]++;
	return false;
}
