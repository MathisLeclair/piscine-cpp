#include <string>
#include <iostream>

template <typename T>
void iter(T *array, int lenght, void (*f)(T)){
    for (int i = 0; i < lenght; i++) {
        f(array[i]);
    }
}
template <typename T>
void iter(T *array, int lenght, void (*f)(T &)){
    for (int i = 0; i < lenght; i++) {
        f(array[i]);
    }
}
template <typename T>
void iter(T *array, int lenght, void (*f)(T const &)){
    for (int i = 0; i < lenght; i++) {
        f(array[i]);
    }
}

void func3(char a){
    std::cout << a << std::endl;
}
void func2(std::string a){
    std::cout << a << std::endl;
}
void func1(int a){
    std::cout << a << std::endl;
}

int main(){
    int arr1[] = {1,2,3,4,5,6};
    std::string arr2[] = {"Pomme", "de", "pain"};
    char arr3[] = {'a', 'b', 'c'};
    ::iter(arr1, 6, func1);
    ::iter(arr2, 3, func2);
    ::iter(arr3, 3, func3);
}
