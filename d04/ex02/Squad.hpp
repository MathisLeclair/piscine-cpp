#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include <string>

class Squad {

public:
    Squad();
    virtual ~Squad();

    virtual int getCount();
    virtual ISpaceMarine* getUnit(int);

    virtual int push(ISpaceMarine*);

private:
    int _unitsCount;
    ISpaceMarine** _units;
};

#endif
