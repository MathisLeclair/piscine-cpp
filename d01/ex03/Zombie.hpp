#include <string>
#include "iostream"
#include <cstdlib>

class Zombie{

public:
    Zombie();
    ~Zombie();

    void announce() const;

private:

    static std::string RandomName();
    std::string _type;
    std::string _name;

};
