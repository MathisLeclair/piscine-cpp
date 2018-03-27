#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type):_type(type),_name(name){}

Zombie::~Zombie(){
    std::cout << "<Dieu> Pouf un zombie de moins(~zombie)" << std::endl;
}


void Zombie::announce() const{
    std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
