#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm: public Form{
public:
    ShrubberyCreationForm ();
    ShrubberyCreationForm (std::string);
    ShrubberyCreationForm (ShrubberyCreationForm const & src);
    virtual ~ShrubberyCreationForm ();

    ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);

    std::string getTarget()const;

    void execute(Bureaucrat const & bureaucrate) const;
private:
    std::string _target;
};

#endif
