#include <iostream>

int main(){
    int a = 1;
    int b = 9;

    std::cout << (a==b) << std::endl;//0
    std::cout << sizeof(a==b) << std::endl;//1
    std::cout << (a!=b) << std::endl;//1
    std::cout << sizeof(a==b) << std::endl;//1
    std::cout << (a&&b) << std::endl;//1
    std::cout << sizeof(a&&b) << std::endl;//1
    std::cout << std::endl;
    bool c = true;
    bool d = false;
    std::cout << (c&&d) << std::endl;//0
    std::cout << sizeof(c&&d) << std::endl;//1
    std::cout << (c||d) << std::endl;//1
    std::cout << sizeof(c||d) << std::endl;//1
    return 0;
}