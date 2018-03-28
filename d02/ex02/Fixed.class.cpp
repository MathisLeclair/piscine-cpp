#include "Fixed.class.hpp"

Fixed::Fixed(){
    //std::cout << "Default constructor called" << std::endl;
    _value = 0;
}

Fixed::Fixed( const Fixed & inst ){
    //std::cout << "Copy constructor called" << std::endl;
    *this = inst;
}

Fixed::Fixed( int val ){
    //std::cout << "Int constructor called" << std::endl;
    _value = val << _fbits;
}

Fixed::Fixed( float val ){
    this->_value = roundf(val * (1 << _fbits));
    //std::cout << "float constructor called" << std::endl;
}

Fixed::~Fixed(){
    //std::cout << "Destuctor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & inst){
    //std::cout << "Assignation operator called" << std::endl;
    this->_value = inst.getRawBits();

    return(*this);
}

bool Fixed::operator>(Fixed const & rho){
    if (this->toFloat() > rho.toFloat())
        return true;
    return false;
}

bool Fixed::operator>=(Fixed const & rho){
    if (this->toFloat() >= rho.toFloat())
        return true;
    return false;
}

bool Fixed::operator<(Fixed const & rho){
    if (this->toFloat() < rho.toFloat())
        return true;
    return false;
}

bool Fixed::operator<=(Fixed const & rho){
    if (this->toFloat() <= rho.toFloat())
        return true;
    return false;
}

bool Fixed::operator!=(Fixed const & rho){
    if (this->toFloat() != rho.toFloat())
        return true;
    return false;
}

Fixed Fixed::operator+(Fixed const & rho){
    return(Fixed(this->_value + rho.getRawBits()));
}

Fixed Fixed::operator-(Fixed const & rho){
    return(Fixed(this->_value - rho.getRawBits()));
}

Fixed Fixed::operator/(Fixed const & rho){
    return(Fixed(this->toFloat() / rho.toFloat()));
}

Fixed Fixed::operator*(Fixed const & rho){
    return( Fixed(this->toFloat() * rho.toFloat()) );
}

Fixed & Fixed::operator++(){
    this->_value++;
    return(*this);
}

Fixed Fixed::operator++( int ){
    Fixed b(*this);
    this->_value++;
    return(b);
}

Fixed & Fixed::operator--(){
    this->_value--;
    return(*this);
}

Fixed Fixed::operator--( int ){
    Fixed b(*this);
    this->_value--;
    return(b);
}

int Fixed::getRawBits() const{
    return(this->_value);
}

void Fixed::setRawBits(int const raw) {
    //std::cout << "Set Raw Bits called" << std::endl;
    this->_value = raw;
}

float Fixed::toFloat( void ) const{
    float f = this->_value;
    return(f / (1 << this->_fbits)); //faux - a faire
}

int Fixed::toInt( void ) const{
    return((this->_value) >> _fbits);
}

std::ostream & operator<<(std::ostream & stream, Fixed const & inst){
    stream<<inst.toFloat();
    return(stream);
}
