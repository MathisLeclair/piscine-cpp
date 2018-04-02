#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_grade(150),_name("Pierre"){}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name){
    if (grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    if (grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src):_name(src.getName()){
    this->_grade = src.getGrade();
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src){
    this->_grade = src.getGrade();
    return *this;
}


int Bureaucrat::getGrade() const{ return _grade; }
std::string Bureaucrat::getName() const { return _name; };

void   Bureaucrat::incrementGrade(){
    _grade = _grade > 1 ? _grade - 1 : 1;
}

void   Bureaucrat::decrementGrade(){
    _grade = _grade < 150 ? _grade + 1 : 150;
};

void Bureaucrat::signForm(Form & form){
    try {  form.beSigned(*this);  }
    catch (std::exception & e){
        std::cout << "<" << _name << "> cannot signs <" << form.getName() << "> because " << e.what() << std::endl;
        return ;
    }
    std::cout << "<" << _name << "> signs <" << form.getName() << std::endl;
}
void Bureaucrat::executeForm(Form const & form){
    try{
        form.execute(*this);
    }catch(std::exception & e){
        std::cout << "<" << _name << "> cannot execute <" << form.getName() << "> because " << e.what() << std::endl;
    }
    std::cout << "<" << _name << "> execute <" << form.getName() << ">" << std::endl;
}


Bureaucrat::GradeTooHighException::GradeTooHighException(){}
Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src){(void)src;}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){}
char const *Bureaucrat::GradeTooHighException::what() const throw(){
    return "bitas las bananas(too high)";
}

Bureaucrat::GradeTooLowException::GradeTooLowException(){}
Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src){(void)src;}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){}
char const *Bureaucrat::GradeTooLowException::what() const throw(){
    return "cay nul(too low)";
}

std::ostream& operator<<(std::ostream & o, Bureaucrat const & src){
    o << "<" << src.getName() << ">, bureaucrat grade <" << src.getGrade() << ">" << std::endl;
    return o;
}
