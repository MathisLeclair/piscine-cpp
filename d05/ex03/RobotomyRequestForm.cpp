#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm",72,45),_target("Johnson"){ srand(time(NULL)); }
RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequestForm",72,45),_target(target){ srand(time(NULL)); }
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src):Form("RobotomyRequestForm",72,45){  _target = src.getTarget();  }

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src){
    this->Form::operator=(src);
    this->_target = src.getTarget();
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & bureaucrate) const{
    if (!this->getSigned() || bureaucrate.getGrade() > this->getGradeExec()){
        throw(RobotomyRequestForm::GradeTooHighException());
    }
    std::cout << "*driling noise*" << std::endl;
    if (rand() % 100 < 50)
        std::cout << "<" << _target << "> as been robotomized " << std::endl;
    else
        std::cout << "<" << _target << "> Robotomization FAILED" << std::endl;
}

std::string RobotomyRequestForm::getTarget()const{return this->_target;}
