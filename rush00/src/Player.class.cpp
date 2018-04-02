#include "Player.class.hpp"

//Player::Player():Ship(){}

Player::Player(int x, int y):Ship(x, y,FORM_PLAYER){
	setColor(1);
}

Player::Player(Player & src):Ship(src){}

Player::~Player(){}

Player & Player::operator=(Player const & src){
    this->Ship::operator=(src);
    return *this;
}

bool Player::nextFrame( int input )
{
    if ( input == KEY_UP && _pos[1] > 1){ _pos[1]--; }
    else if ( input == KEY_DOWN && _pos[1] < BOARD_LINES - _form.getCol() ){ _pos[1]++; }
    else if ( input == KEY_LEFT && _pos[0] > 1){ _pos[0]--; }
    else if ( input == KEY_RIGHT && _pos[0] < BOARD_COLS - _form.getRow()){ _pos[0]++; }
	else if ( input == KEY_SPACE) return true;
	return false;
}
