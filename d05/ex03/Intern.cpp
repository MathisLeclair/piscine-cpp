#include "Intern.hpp"

Intern::Intern(){}
Intern::Intern(Intern const & src){  (void)src;  }
Intern::~Intern(){}

Intern & Intern::operator=(Intern const & src){  (void)src; return *this;  }

Form* Intern::makeForm(std::string form, std::string target){
    if (form.find("robot") != std::string::npos)
    {
        std::cout << "Intern creates <RobotomyRequestForm>" << std::endl;
        return new RobotomyRequestForm(target);
    }
    else if (form.find("president") != std::string::npos){
        std::cout << "Intern creates <PresidentialPardonForm>" << std::endl;
        return new PresidentialPardonForm(target);
    }
    else if (form.find("shrubbery") != std::string::npos){
        std::cout << "Intern creates <ShrubberyCreationForm>" << std::endl;
        return new ShrubberyCreationForm(target);
    }
    else
    {
        std::cout << "Unrecognized form request, try again with a correct form name" << std::endl;
        return NULL;
    }
}
