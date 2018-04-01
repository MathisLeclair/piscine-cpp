#ifndef FIGHTER_CLASS_HPP
# define FIGHTER_CLASS_HPP

# include "Enemie.class.hpp"

class Fighter: public Enemie {
public:
    Fighter();
    Fighter(int, int);
    Fighter(Fighter & src);
    ~Fighter();

    Fighter& operator=(Fighter const & src);

private:
};

#endif
