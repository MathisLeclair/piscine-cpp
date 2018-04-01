#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <curses.h>

#define MAX_BLOCK 100

#define FORM_PLAYER 0
#define FORM_ENNEMY 1
#define FORM_PROJECTILE 2
#define FORM_FIGHTER 3
#define FORM_BOMBER 4
#define FORM_BOSS 5

struct form {
	int col;
	int row;
	int rep[MAX_BLOCK];
};

extern form forms[3];

class Form {
public:
	Form(int n);
	~Form();
	Form(Form const & src);
	Form& operator=(Form const & src);

	//bool collide(int x, int y, int x2, int y2, Form & f);

	int getCol() const;
	int getRow() const;
	int get(int x, int y) const;
	int getColor() const;
	void set(int *arr, int n);
	int *getRep() const;
	int getN() const;
private:
	int rep[MAX_BLOCK];
	int col;
	int row;
	int color;
};

#endif
