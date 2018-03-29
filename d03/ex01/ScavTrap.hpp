#ifndef SCAV__TRAP__HPP
# define SCAV__TRAP__HPP

# include <string>
# include <iostream>

class ScavTrap{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap & src);
    ~ScavTrap();


    ScavTrap & operator=(ScavTrap const & src);

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

    void challengeNewcomer() const;

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
