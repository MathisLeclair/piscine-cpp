#include <string>
#include <iostream>
#include <climits>
#include <cstring>

int main(int argc, char **argv){
    if (argc != 2){
        std::cout << "usage : ./Conv Char | Int | Float | Double" << std::endl;
        return -1;
    }

    std::string input = argv[1];
    if (input.length() == 1 && !isdigit(input[0])){
        std::cout << "CHAR" << std::endl;
        if (isprint(input[0]))
            std::cout << "Char: " << static_cast<char>(input[0]) << std::endl;
        else
            std::cout << "Char: Non displayable"<< std::endl;
        std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
        return 0;
    }
    bool is_int = true;
    for (size_t i = 0; i < input.length();i++) {  if (!isdigit(input[i]) && input[i] != '+' && input[i] != '-') is_int = false;  } // is int?
    if (is_int){
        std::cout << "Char:";
        if (isprint(strtol(input.c_str(), 0, 10))) // is a char?
            std::cout << static_cast<char>(strtol(input.c_str(), 0, 10)) << std::endl;
        else if(strtol(input.c_str(), 0, 10) > 127) // not a char
            std::cout << "Impossible" << std::endl;
        else
            std::cout << "Non displayable" << std::endl; //char but not displayable

        if ((strtol(input.c_str(), 0, 10) < INT_MAX && strtol(input.c_str(), 0, 10) > INT_MIN ) || errno != ERANGE){ // check for int overflow
            std::cout << "int: " << static_cast<int>(strtol(input.c_str(), 0, 10)) << std::endl;}
        else{ //good int
            std::cout << "int: Impossible" << std::endl;}

        if (errno == ERANGE) //check for double overflow
            std::cout << "double: Impossible" << std::endl  << "float: Impossible" << std::endl;
        else {  std::cout << "double: " << static_cast<double>(strtol(input.c_str(), 0, 10)) << ".0" << std::endl;
        std::cout << "float: " << static_cast<float>(strtol(input.c_str(), 0, 10)) << ".0f" << std::endl;}

        return 0;
    }
    bool is_float = true;
    for (size_t i = 0; i < input.length();i++) {  if (!isdigit(input[i]) && input[i] != '+' && input[i] != '-' && input[i] != 'f' && input[i] != '.') is_float = false;  } // is float?
    if (is_float && input.find('f') == input.length() - 1 && input.rfind('f') == input.find('f')){//is a float - not complete
        std::cout << "Char:";
        if (isprint(strtol(input.c_str(), 0, 10))) // is a char?
            std::cout << static_cast<char>(strtol(input.c_str(), 0, 10)) << std::endl;
        else if(strtol(input.c_str(), 0, 10) > 127) // not a char
            std::cout << "Impossible" << std::endl;
        else
            std::cout << "Non displayable" << std::endl; //char but not displayable
        std::cout << "int: " << static_cast<int>(strtol(input.c_str(), 0, 10)) << std::endl;
        std::cout << "float: " << static_cast<float>(strtod(input.c_str(), 0)) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(strtod(input.c_str(), 0)) << std::endl;
    }
    else if (is_float && input.find('.') && input.rfind('.') == input.find('.')){//is a double - not complete
        std::cout << "Char:";
        if (isprint(strtol(input.c_str(), 0, 10))) // is a char?
            std::cout << static_cast<char>(strtol(input.c_str(), 0, 10)) << std::endl;
        else if(strtol(input.c_str(), 0, 10) > 127) // not a char
            std::cout << "Impossible" << std::endl;
        else
            std::cout << "Non displayable" << std::endl; //char but not displayable
        std::cout << "int: " << static_cast<int>(strtol(input.c_str(), 0, 10)) << std::endl;
        std::cout << "float: " << static_cast<float>(strtod(input.c_str(), 0)) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(strtod(input.c_str(), 0)) << std::endl;
    }
    else{
        if (input == "-inff" || input == "-inf")
             std::cout << "Char: Impossible" << std::endl << "int: Impossible" << std::endl << "float: -inff" << std::endl << "double: -inf" << std::endl << "it's infinite WHAT DO YOU EXPECT ME TO DO WITH IT" << std::endl;
        else if (input == "+inff" || input == "+inf")
            std::cout << "Char: Impossible" << std::endl << "int: Impossible" << std::endl << "float: inff" << std::endl << "double: inf" << std::endl << "it's infinite WHAT DO YOU EXPECT ME TO DO WITH IT" << std::endl;
        else if (input == "nan" || input == "nanf")
            std::cout << "Char: Impossible" << std::endl << "int: Impossible" << std::endl << "float: nanf" << std::endl << "double: nan" << std::endl << "it's Not a Number WHAT DO YOU EXPECT ME TO DO WITH IT" << std::endl;
    }

}
