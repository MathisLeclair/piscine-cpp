#ifndef GAME_HPP
#define GAME_HPP

#include "use.hpp"

#include "Player.class.hpp"
#include "Enemie.class.hpp"
#include "Fighter.class.hpp"
//#include "Projectile.hpp"
#include "Screen.class.hpp"

#define MAX 40

class Game {
public:
	int level;
	Screen screen;
	int en;
	Enemie enemies[MAX];
	//int pn;
	//Projectile projectiles[MAX];
	//int bn;
	//Background backgroundItems[MAX];

	Player player;
	Game(int level, int fps);
	//TODO:
	//Game(Game const & src);
	//~Game();
	//Game& operator=(Game &src);

	void play();
	void loop();

	void nextLevel();

	//timer
	size_t prev;
	size_t initTime;
	size_t toWait;
	bool isTimeUp();
	void initWait();
	void resetWait();

};

#endif
