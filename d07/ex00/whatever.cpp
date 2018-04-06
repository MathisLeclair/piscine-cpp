#include <iostream>
#include <string>

template <typename T>
void swap(T & a, T & b){
    T c;
    c = a;
    a = b;
    b = c;
}
template <typename T>
T   min(T const & a, T const & b){
    return a > b ? b : a ;
}
template <typename T>
T   max(T const & a, T const & b){
    return a < b ? b : a ;
}

int main(void){
    int a = 1;
    int b = 2;
    float c = 1.2;
    float d = 2.3;
    std::string s1 = "bonjourno";
    std::string s2 = "byebye";

    std::cout << "min(1, 2)=" << ::min(a,b) << std::endl;
    std::cout << "max(1.2, 2.3)=" << ::max(c,d) << std::endl;
    std::cout << "swap(1.2, 2.3) c: " << c << " d: " << d << "swap ";
    ::swap(c,d);
    std::cout << "c: " << c << " d: " << d << std::endl;
    std::cout << "swap(2, 1) a: " << a << " b: " << b << "swap ";
    ::swap(a,b);
    std::cout << "a: " << a << " b: " << b << std::endl;
    std::cout << "s1 = "<< s1 << " s2 = "  << s2 << std::endl;
    std::cout << "swap(s1, s2)" << std::endl;
    ::swap(s1,s2);
    std::cout << "s1 = "<< s1 << " s2 = "  << s2 << std::endl;
}
