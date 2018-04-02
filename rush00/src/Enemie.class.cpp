#include "Enemie.class.hpp"
#include "use.hpp"

Enemie::Enemie():Ship(){
	std::cout << "OK" << std::endl;
}

Enemie::Enemie(int x, int y, int form, int speed):Ship(x, y, form),_oldTime(getTime() + speed),_speed(speed){
	setColor(2);
}

Enemie::Enemie(Enemie & src):Ship(src){}

Enemie::~Enemie(){}

Enemie & Enemie::operator=(Enemie const & src){
    this->Ship::operator=(src);
    this->_speed = src.getSpeed();
    return *this;
}

int Enemie::getSpeed() const{ return this->_speed; }

void Enemie::setSpeed(int speed){ this->_speed = speed ;}

bool Enemie::nextFrame( int input ) {
    (void) input;
    if (_oldTime > getTime()){
        return false;
    }
    else {
        _pos[1]++;
        _oldTime =  getTime() + _speed;
    }
	//	this->~Enemie();
	if (rand() % 100 <= ENEMIE_SHOOT_PERCENT)
		return true;
	return false;
}
