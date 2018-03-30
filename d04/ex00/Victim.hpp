#ifndef VICTIM__HPP
# define VICTIM__HPP

# include <string>
# include <iostream>

class Victim {
public:
    Victim();
    Victim(std::string name);
    Victim(Victim & src);
    ~Victim();

    Victim & operator=(Victim & src);

    std::string getName() const;

    virtual void getPolymorphed() const;

protected:
    std::string _name;

};

std::ostream & operator<<(std::ostream & o , Victim & s);

#endif
