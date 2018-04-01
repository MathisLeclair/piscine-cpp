#ifndef BACKGROUND_CLASS_HPP
# define BACKGROUND_CLASS_HPP

#include "Game.hpp"
#include "GameEntities.class.hpp"

#define STAR_PERCENTAGE 15

class Background: public AGameEntities{
public:
    Background();
    Background(Background const &src);
    ~Background();

    Background & operator=(Background const & src);

};

#endif
