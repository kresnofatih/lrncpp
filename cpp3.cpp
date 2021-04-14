#include <iostream>
#include <string>

int main(){
    char kata[5] = {'m', 'o', 'b', 'i', 'l'};

    for(char &c: kata){
        std::cout << c;
    }

    std::string kata2("kucing");

    std::cout << std::endl << kata2;
    return 0;
}