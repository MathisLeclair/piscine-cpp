#ifndef PROJECTILE_CLASS_HPP
# define PROJECTILE_CLASS_HPP

# include "GameEntities.class.hpp"
# include <iostream>

class Projectile: public AGameEntities {
public:
	Projectile();
    Projectile(int, int, int);
    Projectile(Projectile const & src);
    ~Projectile();

    Projectile& operator=(Projectile const & src);

    int getDamage()const;
    int getDirection()const;
    bool nextFrame( int );

protected:
    int _damage;
    int _direction;

};

#endif
