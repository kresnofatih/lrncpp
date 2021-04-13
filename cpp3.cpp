#include <iostream>

void incrementByTwo(int &x){
    x++;
    x++;
}

void incrementByThree(int x){
    x++;
    x++;
    x++;
    std::cout << &x << std::endl;
    std::cout << x << std::endl;
}

int main(){
    int a=9;
    incrementByTwo(a);
    std::cout << a << std::endl;
    std::cout << &a << std::endl; //0x61fe1c
    incrementByThree(a); // 0x61fdf0
    return 0;
}