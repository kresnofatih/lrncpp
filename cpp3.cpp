#include <iostream>

int x = 20;

int getX(){
    return x;
}

int xLocal(){
    int x = 5;
    return x;
}

int main(){
    std::cout << x << std::endl;//20 (global)
    int x = 8;
    std::cout << x << std::endl;//8 (local main)
    std::cout << getX() << std::endl;//20 (global)
    std::cout << xLocal() << std::endl;//5 (local x_local)
    std::cout << x << std::endl;//8 (local main)

    {
        std::cout << x << std::endl;//8 (local main)
        int x = 7;
        std::cout << x << std::endl;//7 (block)
    }
    std::cout << x << std::endl;//8 (local main)
    return 0;
}