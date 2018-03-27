#include "Pony.hpp"

void ponyOnTheHeap(){
    Pony pony1("black", 50);
}

void ponyOnTheStack(){
    Pony *pony2 = new Pony("black", 50);
    pony2->setColor("White");
    delete pony2;
}

int main(void){
    std::cout << "pony on the heap" << std::endl;
    ponyOnTheHeap();
    std::cout << "main" << std::endl;
    std::cout << "pony on the stack" << std::endl;
    ponyOnTheStack();
    std::cout << "main" << std::endl;
}
