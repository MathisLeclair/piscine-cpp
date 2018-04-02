#ifndef SCREEN_CLASS_HPP
# define SCREEN_CLASS_HPP

# include <curses.h>
# include <locale.h>
# include "Form.hpp"
# include "use.hpp"
# include "GameEntities.class.hpp"

class Screen{

public:
    Screen();
    ~Screen();
    Screen(Screen const & src);
    Screen& operator=(Screen const & src);

	void display(int x, int y, char c);
	void displayForm(int x, int y, Form const & f);
	void display(AGameEntities const & e);
	void display(int x, int y, std::string const & n);

	void setColor(int color);
	void unsetColor(int color);
	void updateWindow();

	void render();
	void clear();
	int getInput();

	int col;
	int row;
	int bc;
	int br;
	WINDOW *win;

	//void _createWin(int sx, int sy, int h, int w);
};

#endif
