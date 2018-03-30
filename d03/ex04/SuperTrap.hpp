#ifndef SUPER__TRAP__HPP
# define SUPER__TRAP__HPP

# include <string>
# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap{

public:

    SuperTrap();
    SuperTrap(std::string name);
    SuperTrap(SuperTrap & src);
    ~SuperTrap();

    SuperTrap & operator=(SuperTrap const & src);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);

};

#endif
