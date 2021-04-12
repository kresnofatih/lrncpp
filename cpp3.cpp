#include <iostream>

float cubeVolume(float p, float l, float t=4);

int main(){
    std::cout << cubeVolume(2.3, 3.2, 3.4) << std::endl;
    std::cout << cubeVolume(2.3, 3.2) << std::endl;
    return 0;
}

float cubeVolume(float p, float l, float t){
    return p*l*t;
}