#include "Screen.class.hpp"

Screen::Screen(){
    setlocale(LC_ALL, "");
    initscr(); // Initialization
    cbreak(); // Catch input one by one
    clear(); // Clear screen
    noecho(); // User input suppressed
    start_color();
    //raw(); // Catch signals
    nodelay(stdscr, TRUE); // Getch does not wait for user input
    curs_set(0); // Hide cursor
    keypad(stdscr, TRUE); // Catch special keystroke
    //box(stdscr, ACS_VLINE, ACS_HLINE);
	/*for (int i = 1; i < 7; i += 1){
		init_pair(i, i, COLOR_BLACK);
	}*/
	refresh();
	this->updateWindow();
	//this->win;
	this->br = BOARD_COLS;
	this->bc = BOARD_LINES;
	this->win = newwin(this->br, this->bc, (LINES - this->bc) / 2, (COLS - this->br) / 2);
	box(this->win, 0, 0);
	init_pair(1, COLOR_RED, COLOR_BLACK);
}

Screen::Screen(Screen const &src){*this = src;}
Screen& Screen::operator=(Screen const & src){
	(void)src; //TODO
    return *this;
}
Screen::~Screen(){
	endwin();
}

int Screen::getInput(){
	int n = getch();
	flushinp();
	return n;
}

/*
void Screen::_createWin(int sx, int sy, int h, int w){
}*/

void Screen::updateWindow(){
	getmaxyx(stdscr,this->row,this->col);
}

void Screen::setColor(int color){
	wattron(this->win, COLOR_PAIR(color));
}

void Screen::unsetColor(int color){
	wattroff(this->win, COLOR_PAIR(color));
}

void Screen::display(int x, int y, char c){
	char tmp[2] = {c, 0};
	mvwprintw(this->win, y, x, tmp);
}

void Screen::render(){
	wrefresh(this->win);
}

void Screen::clear(){
	wclear(this->win);
	box(this->win, 0, 0);
}

void Screen::displayForm(int x, int y, Form const & f){
	this->setColor(f.getColor());

	for (int ir = 0; ir < f.getRow(); ir += 1){
		for (int ic = 0; ic < f.getCol(); ic += 1){
			this->display(x + ic, y + ir, f.get(ic,ir));
		}
	}
	this->unsetColor(f.getColor());
}

void Screen::display(AGameEntities const & e){
	this->displayForm(e.getPos(0), e.getPos(1), e.getForm());
}
