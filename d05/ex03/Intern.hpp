#ifndef INTERN_HPP
# define INTERN_HPP

# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {

public:
    Intern ();
    Intern (Intern const & intern);

    Intern & operator=(Intern const & src);

    Form * makeForm(std::string, std::string);

    virtual ~Intern ();
private:

};

#endif
