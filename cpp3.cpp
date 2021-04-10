#include <iostream>

int main(){
    int a = 2;

    switch(a){
        case 1:
            std::cout << "a==1" << std::endl;
            break;
        case 2:
            std::cout << "a==2" << std::endl;
            break;
        case 0:
            std::cout << "a==0" << std::endl;
            break;
    }
    return 0;
}