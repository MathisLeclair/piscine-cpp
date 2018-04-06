#include "span.hpp"
#include <iostream>

Span::Span(){}

Span::Span( int N ){
    this->_list = new std::vector<int>(N);
    _max = N;
}

Span::Span( Span const & src ){
    this->_list = src._list;
    this->_number = src._number;
    this->_max = src._max;
    *this = src;
}

Span::~Span(){
    delete this->_list;
}

Span & Span::operator=(Span const & src){
    this->_list = src._list;
    this->_number = src._number;
    this->_max = src._max;
    return *this;
}

void Span::addNumber( int i ){
    if (_number >= _max)
        throw (Span::ListFull());
    (*_list)[_number++] = i;
}

int        Span::shortestSpan() {

    if (this->_number <= 1) {
        throw ListTooShort();
    }

    int    diff = this->longestSpan();
    for (int i = 0; i < this->_number; i++) {
        for (int j = i+1; j < this->_number; j++) {
            if ( abs((*this->_list)[i] - (*this->_list)[j]) < diff )
                diff = (*this->_list)[i] - (*this->_list)[j];
        }
    }
    return diff;
}

int Span::longestSpan(){
    int min = *std::min_element(_list->begin(), _list->end());
    int max = *std::max_element(_list->begin(), _list->end());
    return max - min;
}

const char* Span::ListTooShort::what( void ) const _NOEXCEPT { return "list is too short"; }
const char* Span::ListFull::what( void )     const _NOEXCEPT { return "list is full"; }
