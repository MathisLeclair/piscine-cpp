#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
    SuperMutant();
    SuperMutant(SuperMutant & src);
    virtual ~SuperMutant();

    SuperMutant & operator=(SuperMutant const & src);

    void takeDamage(int damage);

protected:
};

#endif
