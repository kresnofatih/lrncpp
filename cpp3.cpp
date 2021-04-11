#include <iostream>

int main(){
    int a = 5;
    while(a<=10){
        std::cout << "a: " << a << std::endl;
        a++;
    }

    int b = 5;
    
    do{
        std::cout << "b: " << b << std::endl;
        b++;
    } while(b<=10);

    for(int c=5; c<=10; c++){
        std::cout << "c: " << c << std::endl;
    }
    return 0;
}