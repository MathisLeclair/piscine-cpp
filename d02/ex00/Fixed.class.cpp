#include "Fixed.class.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    _value = 0;
}

Fixed::Fixed( Fixed & inst ){
    std::cout << "Copy constructor called" << std::endl;
    *this = inst;
}

Fixed::~Fixed(){
    std::cout << "Destuctor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed &inst){
    std::cout << "Surgarged operator = called" << std::endl;
    this->_value = inst.getRawBits();

    return(*this);
}

int Fixed::getRawBits() const{
    std::cout << "Get Raw Bits called" << std::endl;
    return(this->_value);
}

void Fixed::setRawBits(int const raw) {
    std::cout << "Set Raw Bits called" << std::endl;
    this->_value = raw;
}
