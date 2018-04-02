#include "Form.hpp"

Form::Form():_name("Contrat embauche"),_signed(false),_gradeExec(30),_gradeSigne(50){}

Form::Form(std::string name, int gradeExec, int gradeSigne):_name(name),_signed(false),_gradeExec(gradeExec),_gradeSigne(gradeSigne){
    if (gradeExec < 1 || gradeSigne < 1)
        throw (Form::GradeTooLowException());
    if (gradeExec > 150 || gradeSigne > 150)
        throw (Form::GradeTooHighException());
}

Form::Form(Form const & src):_name(src.getName()),_gradeExec(src.getGradeExec()),_gradeSigne(src.getGradeSigne()){
    _signed = src.getSigned();
}

Form::~Form(){}

Form & Form::operator=(Form const & src){
    _signed = src.getSigned();
    return *this;
}

std::string Form::getName() const { return _name; };
int Form::getGradeExec() const{ return _gradeExec;}
int Form::getGradeSigne() const{return _gradeSigne;}
bool Form::getSigned() const{return _signed;}

void Form::beSigned(Bureaucrat const & b){
    if (b.getGrade() > _gradeSigne)
        throw(Form::GradeTooLowException());
    else
        _signed = true;
}

Form::GradeTooHighException::GradeTooHighException(){}
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src){(void)src;}
Form::GradeTooHighException::~GradeTooHighException() throw(){}
char const *Form::GradeTooHighException::what() const throw(){
    return "Grade too High";
}

Form::GradeTooLowException::GradeTooLowException(){}
Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src){(void)src;}
Form::GradeTooLowException::~GradeTooLowException() throw(){}
char const *Form::GradeTooLowException::what() const throw(){
    return "Gade too low";
}


std::ostream& operator<<(std::ostream & o, Form const & src){
    o << "the form: " << src.getName() << " status of signed: " << src.getSigned() << " grade require to sign: " << src.getGradeSigne() << " grade require to Execute : " << src.getGradeExec() << std::endl;
    return o;
}
