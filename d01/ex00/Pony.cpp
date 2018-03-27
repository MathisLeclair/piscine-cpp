#include "Pony.hpp"

Pony::Pony(std::string color, int length):_color(color), _length(length){
    std::cout << "A pony is born" << std::endl;
}

Pony::~Pony(){
    std::cout << "A pony is dead" << std::endl;
}

int Pony::getLength() const{
    return this->_length;
}

void Pony::setColor(std::string newColor){
    _color = newColor;
}
