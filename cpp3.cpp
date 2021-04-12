#include <iostream>

int faktorial(int a){
    if(a==1){
        return a;
    } else {
        return a*faktorial(a-1);
    }
}

int main(){
    
    std::cout << faktorial(4) << std::endl;
    return 0;
}