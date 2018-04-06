#include "easyfind.hpp"
#include <list>

int main(void){
    std::list<int> list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.push_back(10);
    list.push_back(50);
    std::cout << "list: 10, 20, 30, 10, 50" << std::endl;
    std::cout << "find 10 = " << easyfind(list, 10) << std::endl;
    std::cout << "find 42 = " << easyfind(list, 42) << std::endl;
}
