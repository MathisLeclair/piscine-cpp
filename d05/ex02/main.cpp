#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>

int        main() {

    Bureaucrat john("John John", 1);
    Bureaucrat eric("Eric Johnson", 50);
    Bureaucrat Johnson("Johnson john", 150);

    ShrubberyCreationForm doc1("tree");
    PresidentialPardonForm doc2("truc");
    RobotomyRequestForm doc3("machin");

    std::cout << john << eric << Johnson << std::endl;
    std::cout << doc1 << std::endl;

    std::cout << "stuff happens." << std::endl;
    std::cout << Johnson;
    std::cout << doc2;

    std::cout << std::endl <<doc1 << std::endl;
    std::cout << "John try executing doc1." << std::endl;
    john.executeForm(doc1);

    std::cout << std::endl << "John sign doc1." << std::endl;
    john.signForm(doc1);
    std::cout << doc1;
    std::cout << "John retry executing doc1." << std::endl;
    john.executeForm(doc1);

    std::cout << std::endl;

    std::cout << std::endl << "John sign doc2." << std::endl;
    john.signForm(doc2);
    std::cout << doc2;
    std::cout << "John try executing doc2." << std::endl;
    john.executeForm(doc2);

    std::cout << std::endl;

    std::cout << std::endl << "John sign doc3." << std::endl;
    john.signForm(doc3);
    std::cout << doc3;
    std::cout << "John try executing doc3." << std::endl;
    john.executeForm(doc3);


    return 0;
}
