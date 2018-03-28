#include "Fixed.class.hpp"
#include <iostream>

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.15f ) * Fixed( 2 ) );
    Fixed d(256);
    Fixed w(2);
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << "4 / 2 = " << d / w << std::endl;
    return 0;
}
