#ifndef PLAYER_CLASS_HPP
# define PLAYER_CLASS_HPP

# include "Ship.class.hpp"
# include "Screen.class.hpp"

#include "use.hpp"

class Player: public Ship{
public:
    Player(int, int);
    Player(Player & src);
    ~Player();

    Player& operator=(Player const & src);

	bool nextFrame( int input );
};

#endif
