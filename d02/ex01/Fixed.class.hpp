#ifndef FIXED__CLASS_HPP
# define FIXED__CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:
    int _value;
    static const int _fbits = 8;

public:
    Fixed ();
    Fixed ( const Fixed & inst );
    Fixed ( const int val );
    Fixed ( const float val );
    ~Fixed ();

    Fixed & operator=(Fixed const & inst);

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    float toFloat( void ) const;
    int toInt( void ) const;

};

std::ostream & operator<<(std::ostream & stream, Fixed const & inst);


#endif
