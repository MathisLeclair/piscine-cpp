#include "Weapon.hpp"

class HumanB{
public:
    HumanB(std::string name);
    ~HumanB();

    void attack() const;
    void setType(std::string type);
    void setWeapon(Weapon & weapon);

private:
    std::string _name;
    Weapon * _weapon;
};
