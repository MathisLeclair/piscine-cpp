#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat{
private:

public:
    Bureaucrat ();
    Bureaucrat (std::string, int);
    Bureaucrat (Bureaucrat const & src);
    virtual ~Bureaucrat ();

    Bureaucrat & operator=(Bureaucrat const & src);

    int getGrade() const;
    std::string getName() const;

    void   incrementGrade();
    void   decrementGrade();
    void   signForm(Form & form);

    class GradeTooHighException : public std::exception{

    public:
        GradeTooHighException ();
        GradeTooHighException (GradeTooHighException const & src);
        virtual ~GradeTooHighException () throw();

        GradeTooHighException & operator=(GradeTooHighException const & src);

        char const  *what() const throw();

    };

    class GradeTooLowException : public std::exception{

    public:
        GradeTooLowException ();
        GradeTooLowException (GradeTooLowException const & src);
        virtual ~GradeTooLowException () throw();

        GradeTooLowException & operator=(GradeTooLowException const & src);

        char const  *what() const throw();

    };

private:
    int _grade;
    const std::string _name;

};

std::ostream& operator<<(std::ostream & o, Bureaucrat const & src);

#endif
