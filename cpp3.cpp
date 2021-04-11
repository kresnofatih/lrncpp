#include <iostream>

int main(){
    for(int a = 0; a<=10; a++){
        if(a==5){
            // break; //finishes loop
            continue; // skips that loop
        }
        std::cout << a << std::endl;
    }
    return 0;
}