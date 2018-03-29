#ifndef SCAV__TRAP__HPP
# define SCAV__TRAP__HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap & src);
    ~ScavTrap();

    ScavTrap & operator=(ScavTrap const & src);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);

    void challengeNewcomer() const;
};

#endif
