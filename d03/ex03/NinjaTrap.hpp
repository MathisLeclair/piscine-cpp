#ifndef NINJA__TRAP__HPP
# define NINJA__TRAP__HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap{
public:
    NinjaTrap();
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap & src);
    ~NinjaTrap();

    NinjaTrap & operator=(NinjaTrap const & src);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);

    void ninjaShoebox(ClapTrap & target);
    void ninjaShoebox(NinjaTrap & target);
    void ninjaShoebox(FragTrap & target);
    void ninjaShoebox(ScavTrap & target);

};

#endif
