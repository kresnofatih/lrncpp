#include <iostream>

int main(){
    int a[5];
    int b[5];
    a[0]=0;
    a[1]=1;
    a[2]=2;
    a[3]=3;
    a[4]=4;
    std::cout << a <<" "<< b << std::endl;//address
    std::cout << sizeof(a)/sizeof(int) << std::endl;//address

    std::cout << &a[0] << " " << a << std::endl;//0x61fe00 0x61fe00 (same)
    std::cout << std::endl;

    // 0
    // 1
    // 2
    // 3
    // 4
    // 0x61fe00
    // 0x61fe04
    // 0x61fe08
    // 0x61fe0c
    std::cout << *a << std::endl;
    std::cout << *(a+1) << std::endl;
    std::cout << *(a+2) << std::endl;
    std::cout << *(a+3) << std::endl;
    std::cout << *(a+4) << std::endl;
    std::cout << &a[0] << std::endl;
    std::cout << &a[1] << std::endl;
    std::cout << &a[2] << std::endl;
    std::cout << &a[3] << std::endl;
    std::cout << &a[4] << std::endl;
    return 0;
}