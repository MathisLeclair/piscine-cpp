#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <fstream>

class Bureaucrat;

class Form{
public:
    Form ();
    Form (std::string, int, int);
    Form (Form const & src);
    virtual ~Form ();

    Form & operator=(Form const & src);

    int getGradeExec() const;
    int getGradeSigne() const;
    bool getSigned() const;
    std::string getName() const;

    void setGradeExec( int );
    void setGradeSign( int );

    void beSigned(Bureaucrat const & b);
    void virtual execute(Bureaucrat const & bureaucrate) const = 0;


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
    const std::string _name;
    bool _signed;
    const int _gradeExec;
    const int _gradeSigne;

};

std::ostream& operator<<(std::ostream & o, Form const & src);

#endif
