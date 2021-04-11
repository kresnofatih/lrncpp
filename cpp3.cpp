#include <iostream>

int main(){
    int finalIndex = 10;
    int b, c, d;

    for(int a = 0; a<=finalIndex; a++){
        if (a==0){
            b=1;
            std::cout << b << " ";
        } else if(a==1){
            b=1;
            c=1;
            std::cout << b << " ";
        } else {
            d=b;
            b=b+c;
            c=d;
            std::cout << b << " ";
        }
    }
    return 0;
}