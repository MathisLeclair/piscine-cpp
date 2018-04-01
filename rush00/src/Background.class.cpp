#include "Background.class.hpp"

Background::Background():AGameEntities(0,0,0){
    int line[COLS];
    int i = -1;
    while (++i < COLS)
        line[i] = rand() % 100 > STAR_PERCENTAGE ? '.' : '0';
    this->_form.set(line, COLS);
}

Background::Background(Background const & src){
    this->AGameEntities::operator=(src);
}

Background::~Background(){}

Background & Background::operator=(Background const & src){
    this->AGameEntities::operator=(src);
    return *this;
}
