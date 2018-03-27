#include "replace.hpp"

void function1(char *filename) {
    std::ofstream myfile(filename);
}

int main(int argc, char **argv) {

    if (argc == 3 && argv[2] && argv[3]){
        function1(argv[1]);
    }
    else
        return 1;

    return 0;
}
