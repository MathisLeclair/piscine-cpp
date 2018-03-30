#include "Squad.hpp"

Squad::Squad(){}

Squad::~Squad(){}

int Squad::getCount(){
    return this->_unitsCount;
}

ISpaceMarine* Squad::getUnit(int n){
    return this->_units[n];
}

int Squad::push(ISpaceMarine* newbz){
    if (newbz == NULL)
        return this->_unitsCount;
    for (int i = 0; i < this->_unitsCount; i++) { if (newbz == this->_units[i]) return this->_unitsCount;} //check if units already exist
    this->_unitsCount++;
    this->_units[this->_unitsCount] = newbz;
}
