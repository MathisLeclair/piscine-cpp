#include "Bureaucrat.hpp"
#include <iostream>

int        main() {

    Bureaucrat john("John John", 1);
    Bureaucrat eric("Eric Johnson", 50);
    Bureaucrat Johnson("Johnson john", 150);

    Form doc1("Random paper", 20, 50);
    Form doc2;

    std::cout << john << eric << Johnson << std::endl;
    std::cout << doc1 << std::endl;

    std::cout << "stuff happens." << std::endl;
    std::cout << Johnson;
    doc2 = doc1;
    std::cout << doc2 << std::endl;


    std::cout << "Work happens." << std::endl;
    john.incrementGrade();
    Johnson.decrementGrade();
    std::cout << john << Johnson;


    try {
        Form impossibruuPaper("impossibruuPaper", 0, 60);
    } catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Form impossibruuPaper2("impossibruuPaper", 0, 160);
        Bureaucrat lost_guy("Lost Guy", 999);
    } catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Johnson.signForm(doc1);
    } catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << doc1 << std::endl;
    john.signForm(doc1);
    std::cout << doc1 << std::endl;

    return 0;
}
