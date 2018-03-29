#ifndef CLAP__TRAP__HPP
# define CLAP__TRAP__HPP

# include <string>
# include <iostream>

class ClapTrap{

public:

    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap & src);
    ~ClapTrap();

    ClapTrap & operator=(ClapTrap const & src);

    int getHitpoint() const;
    int getEnergy() const;
    int getlevel() const;
    int getmDamage() const;
    int getrDamage() const;
    std::string getName() const;

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

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
