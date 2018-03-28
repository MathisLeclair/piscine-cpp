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

    bool operator>(Fixed const & rho);
    bool operator>=(Fixed const & rho);
    bool operator<(Fixed const & rho);
    bool operator<=(Fixed const & rho);
    bool operator!=(Fixed const & rho);

    Fixed operator+(Fixed const & rho);
    Fixed operator-(Fixed const & rho);
    Fixed operator*(Fixed const & rho);
    Fixed operator/(Fixed const & rho);

    Fixed & operator++();
    Fixed operator++( int );
    Fixed & operator--();
    Fixed operator--( int );


    int getRawBits( void ) const;
    void setRawBits( int const raw );

    float toFloat( void ) const;
    int toInt( void ) const;

    static Fixed min(Fixed f1 , Fixed f2 ){
        if (f1 < f2)
            return f1;
        return f2;
    }

    static Fixed max(Fixed f1, Fixed f2){
        if (f1 > f2)
            return f1;
        return f2;
    }

};

std::ostream & operator<<(std::ostream & stream, Fixed const & inst);



#endif
