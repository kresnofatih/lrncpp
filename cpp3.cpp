#include <iostream>

int main(){
    int a = 1;
    int b = 2;
    int c = 0;

    std::cout << !(a==1) << std::endl;//0 (false)
    std::cout << (a!=3) << std::endl;//1 (true)
    std::cout << !(a==b) << std::endl;//1 (true)
    std::cout << (a&&b) << std::endl;//1 (true)
    std::cout << (a&&c) << std::endl;//0 (false)
    std::cout << (a||b) << std::endl;//1 (true)
    std::cout << (a||c) << std::endl;//1 (true)
    return 0;
}