#include <string>
#include "iostream"

class Zombie{

public:
    Zombie(std::string name, std::string type);
    ~Zombie();

    void announce() const;

private:

std::string _type;
std::string _name;

};
