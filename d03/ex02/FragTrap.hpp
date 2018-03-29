#ifndef FRAG__TRAP__HPP
# define FRAG__TRAP__HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap & src);
    ~FragTrap();

    FragTrap & operator=(FragTrap const & src);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);

    void vaulthunter_dot_exe(std::string const & target);
};

#endif
