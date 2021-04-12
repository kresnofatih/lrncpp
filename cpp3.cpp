#include <iostream>

// basic function
int boxArea(int p, int l){
    return p*l;
}

// overload function
int boxArea(int p){
    return p*p;
}

float boxArea(float p){
    return p*p;
}

int main(){
    std::cout << boxArea(2, 4) << std::endl;
    std::cout << boxArea(2) << std::endl;
    std::cout << boxArea(3.3f) << std::endl;
    return 0;
}