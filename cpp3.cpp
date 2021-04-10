#include <iostream>

int main(){
    int a = 4;
    int b = 3;

    std::cout << a+b << std::endl;//7
    std::cout << sizeof(a+b) << std::endl;//4
    int c = 7;
    short d = 12;

    std::cout << c+d << std::endl;//19
    std::cout << sizeof(c+d) << std::endl;//4
    std::cout << d/c << std::endl;//1
    std::cout << sizeof(d/c) << std::endl;//4

    double e = 3.2;
    int f = 9;
    float g = f/e;

    std::cout << f/e << std::endl;// 2.8125
    std::cout << sizeof(f/e) << std::endl;//8
    std::cout << g << std::endl;// 2.8125
    std::cout << sizeof(g) << std::endl;//4
    return 0;
}