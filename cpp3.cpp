#include <iostream>

int main(){
    int nilai[10] = {0,1,2,3,4,5,6,7,8,9};

    for(int n: nilai){
        std::cout << n << " " << &n << std::endl;
    }
    std::cout << std::endl;
    for(int &n: nilai){
        n*=2;
        std::cout << n << " " << &n << std::endl;
    }
    return 0;
}