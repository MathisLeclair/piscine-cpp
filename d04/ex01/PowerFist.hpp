#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
    PowerFist();
    PowerFist(PowerFist & src);
    PowerFist(std::string const & name, int apcost, int damage);
    virtual ~PowerFist();

    PowerFist & operator=(PowerFist const & src);

    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const;

protected:
};

#endif
