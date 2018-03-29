#ifndef FRAG__TRAP__HPP
# define FRAG__TRAP__HPP

# include <string>
# include <iostream>

class FragTrap{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap & src);
    ~FragTrap();

    FragTrap & operator=(FragTrap const & src);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    int getHitpoint() const;
    int getEnergy() const;
    int getlevel() const;
    int getmDamage() const;
    int getrDamage() const;
    std::string getName() const;

    void vaulthunter_dot_exe(std::string const & target);

protected:
    unsigned int _hitpoint;
    unsigned int _maxHitpoint;
    unsigned int _Energy;
    unsigned int _maxEnergy;
    unsigned int _level;
    std::string _name;
    unsigned int _mDamage;
    unsigned int _rDamage;
    unsigned int _armorDamageReduc;
};

#endif
