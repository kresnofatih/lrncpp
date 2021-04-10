#include <iostream>

int main(){
    int a = 7;

    if (a==4){
        std::cout << "a==4" << std::endl;
    } else if(a==7){
        std::cout << "a==7" << std::endl;
    } else {
        std::cout << "a!=4" << std::endl;
    }
    return 0;
}