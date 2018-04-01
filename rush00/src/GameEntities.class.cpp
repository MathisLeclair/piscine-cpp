#include "GameEntities.class.hpp"

AGameEntities::AGameEntities():_hp(1),_form(0) {
	std::cerr << "N-1AGame" << std::endl;
	_pos[0] = 0;_pos[1] = 0;
}

AGameEntities::AGameEntities(int hp):_hp(hp),_form(0) {
	std::cerr << "N0AGame" << std::endl;
	_pos[0] = 0;_pos[1] = 0;
	_form = Form(0);
}

AGameEntities::AGameEntities(int hp, Form f):_hp(hp),_form(f){
	std::cerr << "N1AGame" << std::endl;
    _pos[0] = 0;_pos[1] = 0;
}

AGameEntities::AGameEntities(int x, int y, int form):_hp(100), _form(form) {
	std::cerr << "AGame3" << std::endl;
    _pos[0] = x; _pos[1] = y;

}

AGameEntities::AGameEntities(AGameEntities const & src) : _form(src.getForm()) {
    this->_hp = src.getHp();
    this->_pos[0] = src.getPos(0);
    this->_pos[1] = src.getPos(1);
}

AGameEntities& AGameEntities::operator=(AGameEntities const & src){
    this->_hp = src.getHp();
    this->_pos[0] = src.getPos(0);
    this->_pos[1] = src.getPos(1);
    this->_form = src.getForm();
    return *this;
}

bool AGameEntities::nextFrame(int input){
	(void)input;
	return false;
}

AGameEntities::~AGameEntities(){}

int AGameEntities::getPos(int i)const{return this->_pos[i];}
int AGameEntities::getHp()const{return this->_hp;}
Form const & AGameEntities::getForm()const{return this->_form;}

void AGameEntities::setHp(int i){
    _hp = i;
}

bool AGameEntities::touch(AGameEntities & other){
    int k = -1;
    int col = other.getForm().getCol();
    int row = other.getForm().getRow();
    //std::cerr << "size player:" << this->getForm().getCol() << "_" << this->getForm().getRow() << std::endl;
    while (++k < this->getForm().getCol())
    {
        int l = -1;
        int i = -1;
        while (++l < this->getForm().getRow())
            while (++i <= col)
            {
                int j = -1;
                while (++j <= row)
                {
                    //std::cerr << "Player x:" << this->_pos[0] + k << "Player y:" << this->_pos[1] + l << "enemie x:" << other.getPos(0) + i << "enemie y:" << other.getPos(1) + j << std::endl;
                    if (this->_pos[0] + k == other.getPos(0) + i  && this->_pos[1] + l == other.getPos(1) + j)
                        return true;
                    }
            }
        }
    return false;
}
