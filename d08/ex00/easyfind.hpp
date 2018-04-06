#include <iostream>
#include <algorithm>

template <typename T>
int easyfind(T t, int i){
    if (find(t.begin(), t.end() ,i) != t.end())
        return 1;
    return 0;
}
