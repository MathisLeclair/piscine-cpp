#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#include <iostream>

int        main() {

    Intern John;
    Form *form;

    form = John.makeForm("president", "adowihdwa");
    std::cout << *form << '\n';
    delete form;
    form = John.makeForm("robot", "adowihdwa");
    std::cout << *form << '\n';
    delete form;
    form = John.makeForm("shrubbery", "adowihdwa");
    std::cout << *form << '\n';
    delete form;
    form = John.makeForm("adwdawdawd", "adowihdwa");
    
    return 0;
}
