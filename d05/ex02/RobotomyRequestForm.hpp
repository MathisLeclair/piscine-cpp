#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm: public Form{
public:
    RobotomyRequestForm ();
    RobotomyRequestForm (std::string);
    RobotomyRequestForm (RobotomyRequestForm const & src);
    virtual ~RobotomyRequestForm ();

    RobotomyRequestForm & operator=(RobotomyRequestForm const & src);

    std::string getTarget()const;

    void execute(Bureaucrat const & bureaucrate) const;
private:
    std::string _target;
};

#endif
