#include "Game.hpp"

Game::Game(int level, int fps) : player(BOARD_COLS/2 - 1, BOARD_LINES - BOARD_LINES/8) {
	level = 0;
	toWait = 1000 / fps;
	enemies[0] = Fighter(1, 1);
	en = 1;
}

void Game::play(){
	screen.clear();

	static int x = 10;
    //Form f;
    //screen.displayForm(x, 10, f);
    x += 1;

	player.nextFrame( screen.getInput() );
	screen.display(player);

	//if (en == 0){ nextLevel(); }

	for (int i = 0; i < en; i += 1){
		if (enemies[i].touch(player)){
			exit(0);
		}
		enemies[i].nextFrame(-1);
		screen.display(enemies[i]);
	}

	screen.render();
}

void Game::nextLevel() {
	this->level += 1;
}

void Game::loop(){
	this->initWait();
	while (1){
		if ( this->isTimeUp() )
		{
			this->play();
			this->resetWait();
		}
	}
}

void Game::initWait(){
	this->initTime = getTime();
	this->prev = 0;
}
void Game::resetWait(){
	this->prev = getTime();
}
bool Game::isTimeUp(){
	if (this->prev == 0 || getTime() - this->prev >= this->toWait){ return true; }
	return false;
}
