#include "Peon.hpp"

Peon::Peon(std::string name):Victim(name){
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon & src):Victim(src){
    std::cout << "Zog zog." << std::endl;
    this->_name = src._name;
    *this = src;
}

Peon::~Peon(){
    std::cout << "Bleuark..." << std::endl;
}

std::ostream & operator<<(std::ostream & o , Peon & s){
    o << "I'm " << s.getName() << " and I like otters !" << std::endl;
    return o;
}

Peon & Peon::operator=(Peon & src){
    this->_name = src._name;
    return (*this);
}


void Peon::getPolymorphed() const{
    std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}
