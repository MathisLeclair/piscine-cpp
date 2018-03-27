#include "Zombie.hpp"

class ZombieHorde{
public:

    ZombieHorde(int N);
    ~ZombieHorde();
    void annouce();

private:
    Zombie *_zHorde;
    int _nbZ;
};
