#ifndef BOMBER_CLASS_HPP
# define BOMBER_CLASS_HPP

# include "Enemie.class.hpp"

class Bomber: public Enemie {
public:
    Bomber();
    Bomber(int, int);
    Bomber(Bomber & src);
    ~Bomber();

    Bomber& operator=(Bomber const & src);

private:
};

#endif
