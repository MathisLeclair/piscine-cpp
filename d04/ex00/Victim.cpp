#include "Victim.hpp"

Victim::Victim(std::string name):_name(name){
    std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::Victim(Victim & src):_name(src._name){
    std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
    this->_name = src._name;
    *this = src;
}

Victim::~Victim(){
    std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

std::string Victim::getName() const{
    return (this->_name);
}

std::ostream & operator<<(std::ostream & o , Victim & s){
    o << "I'm " << s.getName() << " and I like otters !" << std::endl;
    return o;
}

Victim & Victim::operator=(Victim & src){
    this->_name = src._name;
    return (*this);
}

void Victim::getPolymorphed() const{
    std::cout << this->getName() << " has been turned into a cute little sheep !" << std::endl;
}
