#ifndef NINJA__TRAP__HPP
# define NINJA__TRAP__HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public virtual ClapTrap{
public:
    NinjaTrap();
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap & src);
    ~NinjaTrap();

    NinjaTrap & operator=(NinjaTrap const & src);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);

    virtual void ninjaShoebox(ClapTrap & target);
    virtual void ninjaShoebox(NinjaTrap & target);
    virtual void ninjaShoebox(FragTrap & target);
    virtual void ninjaShoebox(ScavTrap & target);

};

#endif
