#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <class T>
class Array {
public:
    Array();
    Array(unsigned int);
    Array(Array const &);
    virtual ~Array();

    Array & operator=(Array const &);
    T & operator[](size_t);

    size_t size();

private:
    T* _array;
    size_t _size;
};

template <class T> Array<T>::Array( void ) :_array( new T[0]),_size(0){}
template <class T> Array<T>::Array( unsigned int i ): _array(new T[i]), _size(i){}
template <class T> Array<T>::~Array( void ) {   delete[] this->_array;    }
template <class T> T & Array<T>::operator[]( size_t i ){
    if (i < 0 || i > this->_size)   throw std::exception();
    return _array[i];
}
template <class T> Array<T> & Array<T>::operator=( Array const & src){
    delete[] (this->_array);
    this->_array = new T[src._size];
    for (size_t i = 0; i < src._size; i++) {    this->_array[i] = src._array[i];    }
    this->_size = src._size;
}
template <class T> Array<T>::Array( Array const & src ){ *this = src; }
template <class T> size_t Array<T>::size(){    return _size;   }

#endif
