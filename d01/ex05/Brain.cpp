#include "Brain.hpp"

Brain::Brain(){}

Brain::~Brain(){}

const std::string Brain::identify()const{
    std::stringstream stream;
    stream << "0x" << this;
    return (stream.str());
}
