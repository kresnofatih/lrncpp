#include <iostream>

int main(){
    int a = 2;

    a++;
    std::cout << a << std::endl;//3
    a--;
    std::cout << a << std::endl;//2
    // a;
    std::cout << ++a << std::endl;//3
    // a--;
    std::cout << --a << std::endl;//2
    return 0;
}