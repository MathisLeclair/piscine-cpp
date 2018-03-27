#include "Zombie.hpp"
static const char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
static const int sizalp = 62;

Zombie::Zombie(){
    this->_name = Zombie::RandomName();
    this->_type = "Zombie";
}

Zombie::~Zombie(){
    std::cout << "<Dieu> Pouf un zombie de moins(~zombie)" << std::endl;
}

void Zombie::announce() const{
    std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::RandomName(){
    std::string name;
    int sizeName = 4;

    srand(time(NULL));
    sizeName += rand() % 10;
    for (int i = 0; i < sizeName; i++) {
        name.push_back(alp[rand() % sizalp]);
    }
    return name;
}
