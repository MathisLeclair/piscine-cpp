#include <iostream>

class Base{ public: virtual ~Base() {} };

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base * generate(){
    int _r = rand() % 100;
    if (_r <= 33)
        return new A;
    else if (_r <= 66)
        return new B;
    else
        return new C;
}

void identify_from_pointer( Base * p ){
    if (dynamic_cast<A*>(p)){    std::cout << "A ";    }
    if (dynamic_cast<B*>(p)){    std::cout << "B ";    }
    if (dynamic_cast<C*>(p)){    std::cout << "C ";    }
}

void identify_from_reference( Base & p ){
    identify_from_pointer(&p);
}

int main(void){
    srand(time(NULL));

    Base *b;
    for (size_t i = 0; i < 20; i++) {
        b = generate();
        std::cout << "from pointer : ";
        identify_from_pointer(b);
        std::cout << "from ref : ";
        identify_from_reference(*b);
        std::cout << std::endl;
    }
}
