#ifndef ENEMIE_CLASS_HPP
# define ENEMIE_CLASS_HPP

# include "Ship.class.hpp"

# define FIGHTER_SPEED 1000
# define BOMBER_SPEED 2000
# define BOSS_SPEED INT_MAX

class Enemie: public Ship {
public:
	Enemie();
    Enemie(Enemie & src);
    Enemie(int, int, int, int);
    virtual ~Enemie();

    Enemie & operator=(Enemie const &src);

    int getSpeed() const;

    void setSpeed(int);

    bool nextFrame(int);

private:
    size_t _oldTime;
    int _speed;
};

#endif
