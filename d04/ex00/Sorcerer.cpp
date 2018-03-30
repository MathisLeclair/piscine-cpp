#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title):_name(name),_title(title){
    std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer & src):_name(src._name),_title(src._title){
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
    this->_name = src._name;
    this->_title = src._title;
    *this = src;
}

Sorcerer::~Sorcerer(){
    std::cout << this->_name <<", " << this->_title <<", is dead. Consequences will never be the same !" << std::endl;
}

std::string Sorcerer::getName() const{
    return (this->_name);
}

std::string Sorcerer::getTitle() const{
    return (this->_title);
}

Sorcerer & Sorcerer::operator=(Sorcerer & src){
    this->_name = src._name;
    this->_title = src._title;
    return (*this);
}

std::ostream & operator<<(std::ostream & o , Sorcerer & s){
    o << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies !" << std::endl;
    return o;
}

void Sorcerer::polymorph(Victim const & v) const{
    v.getPolymorphed();
}

void Sorcerer::polymorph(Peon const & v) const{
    v.getPolymorphed();
}
