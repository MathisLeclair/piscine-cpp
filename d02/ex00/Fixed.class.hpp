#ifndef FIXED__CLASS_HPP
# define FIXED__CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:
    int _value;
    static const int fbits = 8;

public:
    Fixed ();
    Fixed ( Fixed & inst );
    ~Fixed ();

    Fixed & operator=(Fixed & inst);

    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif
