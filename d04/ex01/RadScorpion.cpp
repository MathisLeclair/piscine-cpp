#include "RadScorpion.hpp"

RadScorpion::RadScorpion():Enemy(80,"RadScorpion"){
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion & src){
    std::cout << "* click click click *" << std::endl;
    this->_hp = src.getHP();
    this->_type = src.getType();
}

RadScorpion::~RadScorpion(){
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion & RadScorpion::operator=(RadScorpion const & src){
    this->_hp = src.getHP();
    this->_type = src.getType();
    return *this;
}
