#ifndef SHIP_CLASS_HPP
# define SHIP_CLASS_HPP

# include "GameEntities.class.hpp"
# include "Projectile.class.hpp"
# include <iostream>

class Ship: public AGameEntities {
public:
    Ship(Ship & src);
    Ship(int, int, int);
    ~Ship();
    Ship& operator=(Ship const & src);


    int const & getProjectile() const;
    void attack(Ship & target);
    Projectile* shoot(int, int, int);
protected:
    Ship();
private:
    int _projectile;

};

#endif
