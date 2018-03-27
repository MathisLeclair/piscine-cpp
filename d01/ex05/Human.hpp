#include "Brain.hpp"

class Human{

public:
    Human();
    ~Human();

    std::string identify() const;
    Brain const & getBrain() const;
private:
    const Brain _Brain;
};
