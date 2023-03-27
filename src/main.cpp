#include <cstdlib>
#include <iostream>
#include <sstream>
#include <stdexcept>

int main(){
    std::string input;
    for (;;) {
        std::cout << "> ";
        if(!std::getline(std::cin,input)) break;
        std::cout << input << "\n";
    }

    return 0;
}