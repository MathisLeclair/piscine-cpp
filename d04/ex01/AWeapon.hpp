#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>

class AWeapon
{
public:
    AWeapon(AWeapon & src);
    AWeapon(std::string const & name, int apcost, int damage);
    virtual ~AWeapon();

    AWeapon & operator=(AWeapon const & src);

    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;

protected:
    AWeapon();
    std::string _name;
    int _damage;
    int _apcost;
};

#endif
