#include <iostream>
#include <string>

int main(){
    std::string input("fatih");
    std::string kata("fatih");

    if(input == kata){
        std::cout << "correct" << std::endl;
    } else {
        std::cout << "incorrect" << std::endl;
    }
    return 0;
}