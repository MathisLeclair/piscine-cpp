#ifndef SORCER__HPP
# define SORCER__HPP

# include <string>
# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer {
public:
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer & src);
    ~Sorcerer();

    Sorcerer & operator=(Sorcerer & src);

    std::string getName() const;
    std::string getTitle() const;

    void polymorph(Victim const &) const;
    void polymorph(Peon const &) const;

private:
    Sorcerer();
    std::string _name;
    std::string _title;
};

std::ostream & operator<<(std::ostream & o , Sorcerer & s);

#endif
