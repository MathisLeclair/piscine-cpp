//# include "Screen.class.hpp"
//# include "Form.hpp"
# include "Game.hpp"

int main(void){
	srand(time(NULL));
	Game g(0, 16);

	g.loop();
	return 0;
}
