#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm",25,5),_target("Jonhson"){}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src):Form("PresidentialPardonForm",25,5){  _target = src.getTarget();  }
PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardonForm",25,5),_target(target){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src){
    this->Form::operator=(src);
    this->_target = src.getTarget();
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & bureaucrate) const{
    if (!this->getSigned() || bureaucrate.getGrade() > this->getGradeExec()){
        throw(PresidentialPardonForm::GradeTooHighException());
    }
    std::cout << "<" << _target << "> has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::string PresidentialPardonForm::getTarget()const{return this->_target;}
