#include "template.hpp"
#include <iostream>

using namespace std;

int main(){
    std::cout << "Fibonacci<4>::value = " << Fibonacci<4>::value << std::endl;
    std::cout << "fibonacci<4>() = " << fibonacci<4>() << std::endl;
    return 0;
}