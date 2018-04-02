#include "Game.hpp"

Game::Game(int level, int fps) : player(BOARD_COLS/2 - 1, BOARD_LINES - BOARD_LINES/8) {
	game = true;
	level = 0;
	toWait = 1000 / fps;
	en = 0;
	epn = 0;
	ppn = 0;
	enemiesLeft = 0;
	bn = 1;
}

bool Game::play(){
	screen.clear();
	int in = screen.getInput();
	if (in == KEY_LEAVE){return false;}

	/*for (int i = 0; i < bn; i++){
		bgs[i].nextFrame(-1);
		screen.display(bgs[i]);
	}*/

	if (enemiesLeft <= 0){
		if (!nextLevel()) { return stopGame(true); }
	}

	if (player.nextFrame(in)) {addPlayerProjectile();}
	screen.display(player);


	for (int i = 0; i < en; i += 1){
		if (!enemies[i].exist()){continue;}
		if (enemies[i].touch(player)){ return stopGame(false); }
		if (enemies[i].nextFrame(-1)){ addEnemiesProjectile(i); }

		if (enemyOutside(enemies[i]))
			removeEnemie(i);
		else screen.display(enemies[i]);
	}

	for (int i = 0; i < epn; i += 1){
		if (enemiesProjectiles[i].touch(player)){ return stopGame(false); }
		if (outside(playerProjectiles[i])){ playerProjectiles[i].kill(); continue;}

		enemiesProjectiles[i].nextFrame(-1);
		screen.display(enemiesProjectiles[i]);
	}

	for (int i = 0; i < ppn; i++){
		if (!player.exist() || outside(playerProjectiles[i])){ playerProjectiles[i].kill(); continue;}
		for (int x = 0; x < en; x++){
			//std::cerr << "proj num " << i << " enemie num" << x << '\n';
			if (enemies[i].exist() && playerProjectiles[i].touch(enemies[x])){attackEnemie(x, i);}
		}
		playerProjectiles[i].nextFrame(-1);
		screen.display(playerProjectiles[i]);
	}

	screen.render();
	return true;
}

bool Game::outside(AGameEntities const & e){
	int fc = e.getForm().getCol();
	int fr = e.getForm().getRow();
	if (e.getPos(0) + fc < 0 || e.getPos(0) - fc > BOARD_COLS) return true;
	if (e.getPos(1) + fr < 0 || e.getPos(1) - fr > BOARD_LINES) return true;
	return false;
}
bool Game::enemyOutside(AGameEntities const & e){
	int fr = e.getForm().getRow();
	if (e.getPos(1) - fr > BOARD_LINES) return true;
	return false;
}

void Game::removeEnemie(int x) {
	enemies[x].kill();
	enemiesLeft -= 1;
}

void Game::attackEnemie(int x, int i) {
	enemies[x].takeDamage(playerProjectiles[i].getDamage());
	if (enemies[x].getHp() <= 0){
		removeEnemie(x);
	}
	playerProjectiles[i].kill();
}


void Game::addPlayerProjectile(){
	if (ppn >= MAX){ppn = 0;}

	playerProjectiles[ppn] = Projectile(player.getPos(0), player.getPos(1), KEY_UP);
	playerProjectiles[ppn].setColor(4);
	ppn += 1;
}

void Game::addEnemiesProjectile(int i){
	if (epn >= MAX){epn = 0;}
	enemiesProjectiles[epn] = Projectile(enemies[i].getPos(0), enemies[i].getPos(1), KEY_DOWN);
	epn += 1;
}

/*
bool Game::outside(AGameEntities & const e){
	if e.getPos(0),
}
*/


bool Game::nextLevel() {
	level += 1;
	if (level == 1){
		/*en = 40;
		for (int i = 0; i < en - 1; i++) {
			enemies[i] = Fighter(rand() % COLS - 1 > 3 ? rand() % COLS - 1 : 3 , - (rand() % 100));
		}*/
		en = 2;
		enemies[0] = Fighter(10, -1);
		enemies[1] = Fighter(20, -1);
	}
	else if (level == 2){
		en = 40;
		for (int i = 0; i < (en -1) / 4; i++) {
			enemies[i] = Bomber(rand() % COLS - 1 > 3 ? rand() % COLS - 1 : 3 , - (rand() % 100));
		}
		for (int i = (en -1) / 4; i < en -1; i++) {
			enemies[i] = Fighter(rand() % COLS - 1 > 3 ? rand() % COLS - 1 : 3 , - (rand() % 100));
		}
	} else if (level == 3){
		en = 1;
		enemies[0] = Boss(COLS / 2, 2);
	} else {return false;}
	this->enemiesLeft = this->en;
	return true;
}

void Game::loop(){
	this->initWait();
	while (1){
		if ( isTimeUp() )
		{
			int stay = (game) ? play() : gameOver();
			if (!stay) break;
			resetWait();
		}
	}
}

bool Game::gameOver(){
	int in = screen.getInput();
	if (in == KEY_LEAVE){return false;}

	screen.clear();
	screen.display(BOARD_COLS/2, BOARD_LINES/2, (this->win) ? "YEAY!" : "Game over! :/");
	screen.display(BOARD_COLS/2, BOARD_LINES/2 + 2, "Press any key to retry");
	screen.display(BOARD_COLS/2, BOARD_LINES/2 + 3, "or echap to leave");
	screen.render();
	return true;
}

bool Game::stopGame(bool win){
	this->win = win;
	this->game = false;
	return true;
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
