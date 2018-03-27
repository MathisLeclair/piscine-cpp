#include <string>
#include <iostream>
#include <sstream>


class Brain{
public:

    Brain();
    ~Brain();

    int getQi();
    const std::string identify()const;

private:
    int _Qi;
};
