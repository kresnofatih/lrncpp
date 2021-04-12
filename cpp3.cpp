#include <iostream>

int main(){
    int a = 3;
    int &b = a;
    a = 5;
    std::cout << a << " " << b << std::endl;
    return 0;
}