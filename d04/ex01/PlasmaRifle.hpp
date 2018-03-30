#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
    PlasmaRifle();
    PlasmaRifle(PlasmaRifle & src);
    PlasmaRifle(std::string const & name, int apcost, int damage);
    virtual ~PlasmaRifle();

    PlasmaRifle & operator=(PlasmaRifle const & src);

    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const;

protected:
};

#endif
