#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

public:
    Character(std::string const & name);
    Character (Character & src);
    virtual ~Character ();

    Character & operator=(Character const & src);

    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);

    std::string virtual getName() const;
    int virtual getAp() const;
    AWeapon * getWeapon() const;

private:
    std::string _name;
    AWeapon *_weapon;
    int _ap;
    Character ();

};

std::ostream & operator<<(std::ostream & o, Character const & src);

#endif
