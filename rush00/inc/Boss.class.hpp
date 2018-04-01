#ifndef BOSS_CLASS_HPP
# define BOSS_CLASS_HPP

# include "Enemie.class.hpp"

class Boss: public Enemie {
public:
    Boss();
    Boss(int, int);
    Boss(Boss & src);
    ~Boss();

    Boss& operator=(Boss const & src);

private:
};

#endif
