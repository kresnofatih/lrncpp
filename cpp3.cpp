#include <iostream>
#include <limits>

int main(){
    int a = 1;
    short b = 8;
    float c = 3.3;
    std::cout << a <<std::endl;
    std::cout << sizeof(a) << std::endl;
    std::cout << std::numeric_limits<int>::max() << std::endl;
    std::cout << std::numeric_limits<int>::min() << std::endl;
    std::cout << a <<std::endl;
    std::cout << sizeof(a) << std::endl;
    std::cout << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << std::numeric_limits<unsigned int>::min() << std::endl;
    std::cout << b <<std::endl;
    std::cout << sizeof(b) << std::endl;
    std::cout << std::numeric_limits<short>::max() << std::endl;
    std::cout << std::numeric_limits<short>::min() << std::endl;
    std::cout << c <<std::endl;
    std::cout << sizeof(c) << std::endl;
    std::cout << std::numeric_limits<float>::max() << std::endl;
    std::cout << std::numeric_limits<float>::min() << std::endl;
    return 0;
}