#ifndef GAME_HPP
#define GAME_HPP

#include "use.hpp"

#include "Player.class.hpp"
#include "Enemie.class.hpp"
#include "Fighter.class.hpp"
#include "Bomber.class.hpp"
#include "Boss.class.hpp"
//#include "Projectile.hpp"
#include "Screen.class.hpp"
#include "Background.class.hpp"

#define MAX 40

class Game {
public:
	bool game;
	bool win;
	int level;
	int enemiesLeft;
	Screen screen;
	int en;
	Enemie enemies[MAX];
	int epn;
	Projectile enemiesProjectiles[MAX];
	int ppn;
	Projectile playerProjectiles[MAX];
	int bn;
	Background bgs[BOARD_LINES];

	Player player;
	Game(int level, int fps);
	//TODO:
	//~Game();
	//Game& operator=(Game &src);

	bool outside(AGameEntities const & e);
	bool enemyOutside(AGameEntities const & e);
	bool play();
	void loop();


	//timer
	size_t prev;
	size_t initTime;
	size_t toWait;
	bool isTimeUp();
	void initWait();
	void resetWait();

	bool stopGame(bool win);
	void addPlayerProjectile();
	void addEnemiesProjectile(int);
	bool gameOver();
	bool nextLevel();
	void attackEnemie(int x, int i);
	void removeEnemie(int x);


// DO NOT USE : NOT IMPLEMENTED
	Game();
	Game(Game const & src);
	Game & operator=(Game const & src);

};

#endif
