#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
public:
    Enemy(int hp, std::string const & type);
    Enemy(Enemy & src);
    virtual ~Enemy();

    Enemy & operator=(Enemy const & src);

    std::string virtual getType() const;
    int getHP() const;

    virtual void takeDamage(int);

protected:
    Enemy();
    int _hp;
    std::string _type;
};

#endif
