#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon:  public Victim{
public:
    Peon(std::string name);
    Peon(Peon & src);
    ~Peon();

    Peon & operator=(Peon & src);


    virtual void getPolymorphed() const;

private:
    Peon();
};

std::ostream & operator<<(std::ostream & o , Peon & s);

#endif
