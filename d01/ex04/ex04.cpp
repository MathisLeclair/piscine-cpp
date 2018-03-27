#include <string>
#include <iostream>

int main(void){
    std::string str = "HI THIS IS BRAIN";
    std::string *strPtr = &str;
    std::string &strRef = str;

    std::cout << "using ptr:" << *strPtr << std::endl;
    std::cout << "using ptr:" << strRef << std::endl;

}
