#include "Projectile.class.hpp"

Projectile::Projectile():AGameEntities(){}

Projectile::Projectile(int x, int y, int direction):AGameEntities(x, y), _direction(direction){
    _form = Form(FORM_PROJECTILE); //TODO construct of Form who take array and return a Form
    this->_pos[0] = x;
    this->_pos[1] = y;
}

Projectile::Projectile(Projectile const & src):AGameEntities(src){
}

Projectile::~Projectile(){}

Projectile & Projectile::operator=(Projectile const & src){
    //Missing stuff ?
    this->_damage = src.getDamage();
    this->_direction = src.getDirection();
    return *this;
}

int Projectile::getDamage()const{ return this->_damage; }
int Projectile::getDirection()const{ return this->_direction; }

bool Projectile::nextFrame( int i ) {
    (void)i;
    if (this->_direction == KEY_UP )
        _pos[0]++;
    else
        _pos[0]--;
	return false;
}
