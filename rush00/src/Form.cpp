#include "Form.hpp"

form forms[6] = {
   {
	   3,2,{
		0, '^', 0,
	  '/', '|', '\\',
	   }
   },
   {
	  3,3,{
	   '*', '*', '*',
         0, '*', 0,
	     0, '*', 0
	  }
   },
   {
	   1,1,{
		'|',
	   },
   },
   {
	  3,2,{
	   '*', '*', '*',
         0, '*', 0,
	  }
   },
   {
	  3,2,{
	   '*', '*', '*',
       'v', '*', 'v',
	  }
   },
   {
	  6,4,{
	   '*', '*', '*', '*', '*', '*',
       'v', '*', '*', '*', '*', 'v',
         0, 'v', '*', '*', 'v', 0,
         0,  0,  'v', 'v', 0, 0,
	  }
   }
};

//TODO construct of Form who take array and return a Form
/*Form::Form()
{
	std::cerr << "Form empty" << std::endl;

	this->col = 3;
	this->row = 3;
	this->color = 1;
	//this->set(forms[0].rep, forms[0].col * forms[0].row);
}*/

Form::Form(){}

Form::Form(int f){
	this->col = forms[f].col;
	this->row = forms[f].row;
	this->color = 1;
	this->set(forms[f].rep, forms[f].col * forms[f].row);
}
Form::Form(Form const & src){*this = src;}
Form::~Form(){}
Form& Form::operator=(Form const & src){
	this->col = src.getCol();
	this->row = src.getRow();
	this->color = src.getColor();
	this->set(src.getRep(), src.getN());
	return *this;
}

void Form::set(int *arr, int n){
	if (n > MAX_BLOCK){return ;}
	for (int i = 0; i < n; i += 1){
		this->rep[i] = arr[i];
	}
}

void Form::setColor(int c){this->color = c;}

int Form::getCol() const{ return this->col; }
int Form::getRow() const{ return this->row; }
int Form::getColor() const{ return this->color; }
int *Form::getRep() const {
	return (int*)this->rep;
}
int Form::getN() const {
	return getCol() * getRow();
}
void Form::setColRow(int c, int r){
	this->col = c;
	this->row = r;
}

int Form::get(int x, int y) const {
	if (x >= 0 && x < this->getCol() && y >= 0 && y < this->getRow()){
		return this->rep[y * this->getCol() + x];
	}
	//TODO:delete
	std::cout << "FATAL ERROR! check Form::get" << std::endl;
	exit(0);
	return 0;
}
