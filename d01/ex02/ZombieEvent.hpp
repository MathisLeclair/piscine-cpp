#include "Zombie.hpp"

class ZombieEvent{
public:
    ZombieEvent(std::string type);
    ~ZombieEvent();
    
    void setZombieType(std::string type);
    Zombie* newZombie(std::string name);
private:
    std::string _type;
};
