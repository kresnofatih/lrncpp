#include <iostream>

int main(){
    int x = 5;
    int* y = &x;
    int z = 39;
    std::cout << &x << " " << y << " " << &z << std::endl;//address address address2
    std::cout << x << " " << *y << " " << z << std::endl;//5 5 39

    *y = 3;
    std::cout << &x << " " << y << " " << &z << std::endl;//address address address2
    std::cout << x << " " << *y << " " << z << std::endl;//3 3 39

    y = &z;
    std::cout << &x << " " << y << " " << &z << std::endl;//address address
    std::cout << x << " " << *y << " " << z << std::endl;//3 39 39


    return 0;
}