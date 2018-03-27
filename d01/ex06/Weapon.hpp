#ifndef WEAPON__HPP
# define WEAPON__HPP

#include <string>
#include <iostream>

class Weapon{

public:
    Weapon(std::string type);
    ~Weapon();

    std::string const & getType() const;
    void setType(std::string type);

private:
    std::string _type;
};

#endif
