#include "ZombieEvent.hpp"
#include <cstdlib>

static const char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
static const int sizalp = 62;

std::string randomName(){
    std::string name;
    int sizeName = 4;

    srand(time(NULL));
    sizeName += rand() % 10;
    for (int i = 0; i < sizeName; i++) {
        name.push_back(alp[rand() % sizalp]);
    }

    return name;
}

Zombie *randomChump(ZombieEvent zEvent){
    Zombie *z = zEvent.newZombie(randomName());
    z->announce();
    return(z);
}

int main(void) {
    ZombieEvent zEvent("Normal");

    std::cout << "<Random Guy>oulala des zombie..." << std::endl;

    Zombie *z1 = randomChump(zEvent);

    std::cout << "<Random Girl>Au secour! capitain delete!" << std::endl;
    std::cout << "<capitain delete!>voila voila je suis la." << std::endl;
    std::cout << "<Zombie>Ouille ouille ouille. Qu’est-ce que j’ai mal aux couilles" << std::endl;
    delete z1;
    std::cout << "<Random Guy>youpi" << std::endl;
    std::cout << "<Dieu>cay nul j'ai pas d'idée pour malloc ou mettre sur le tas mes Z" << std::endl;

    return 0;
}
