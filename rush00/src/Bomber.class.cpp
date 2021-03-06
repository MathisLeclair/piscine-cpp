#include "Bomber.class.hpp"
#include "use.hpp"

Bomber::Bomber():Enemie(rand() % BOARD_COLS,rand() % BOARD_LINES, FORM_BOMBER, BOMBER_SPEED){
	setHp(300);
}

Bomber::Bomber(int x, int y):Enemie(x, y, FORM_BOMBER, BOMBER_SPEED){setHp(300);};

Bomber::Bomber(Bomber & src):Enemie(src){setHp(300);}

Bomber::~Bomber(){}

Bomber & Bomber::operator=(Bomber const & src){
    this->Enemie::operator=(src);
    return *this;
}
