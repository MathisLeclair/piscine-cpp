#include "Fighter.class.hpp"
#include "use.hpp"

Fighter::Fighter():Enemie(0/*rand() % BOARD_COLS*/, rand() % BOARD_LINES, FORM_FIGHTER, FIGHTER_SPEED){}

Fighter::Fighter(int x, int y):Enemie(x, y, FORM_PLAYER, FIGHTER_SPEED){
	std::cerr << "oK" << std::endl;
};

Fighter::Fighter(Fighter & src):Enemie(src){}

Fighter::~Fighter(){}

Fighter & Fighter::operator=(Fighter const & src){
    this->Enemie::operator=(src);
    return *this;
}
