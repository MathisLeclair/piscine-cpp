#include <string>
#include <iostream>

class Pony{
public:
    int getLength() const;
    void setColor(std::string newColor);
    Pony(std::string color, int length);
    ~Pony();

private:
    std::string _color;
    int _length;

};
