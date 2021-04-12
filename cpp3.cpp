#include <iostream>

int fibonacci(int a){
    if(a>2){
        return fibonacci(a-1)+fibonacci(a-2);
    } else {
        return 1;
    }
}

int main(){
    for(int a = 1; a<20; a++){
        std::cout << fibonacci(a) << " ";
    }
    std::cout << std::endl;
    return 0;
}