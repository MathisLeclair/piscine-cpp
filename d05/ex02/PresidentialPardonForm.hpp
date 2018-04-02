#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm: public Form{
public:
    PresidentialPardonForm ();
    PresidentialPardonForm (std::string);
    PresidentialPardonForm (PresidentialPardonForm const & src);
    virtual ~PresidentialPardonForm ();

    PresidentialPardonForm & operator=(PresidentialPardonForm const & src);

    std::string getTarget()const;

    void execute(Bureaucrat const & bureaucrate) const;
private:
    std::string _target;
};

#endif
