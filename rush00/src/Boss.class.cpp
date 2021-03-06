#include "Boss.class.hpp"
#include "use.hpp"

Boss::Boss():Enemie(rand() % BOARD_COLS,rand() % BOARD_LINES, FORM_BOSS, BOSS_SPEED){
    setHp(50);
}

Boss::Boss(int x, int y):Enemie(x, y, FORM_BOSS, BOSS_SPEED){
    setHp(1500);
};

Boss::Boss(Boss & src):Enemie(src){}

Boss::~Boss(){}

Boss & Boss::operator=(Boss const & src){
    this->Enemie::operator=(src);
    return *this;
}
