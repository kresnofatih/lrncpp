#include <iostream>

int kuadrat(int x){
    int y;
    y=x*x;
    return y;
}

int tambah(int x, int y){
    return (x+y);
}

void printTigaKali(int x){
    std::cout << x << std::endl;
    std::cout << x << std::endl;
    std::cout << x << std::endl;
}

int main(){
    int hasil = kuadrat(3);
    std::cout << hasil << std::endl;

    hasil = tambah(2, 8);
    std::cout << hasil << std::endl;

    int s = 5;
    printTigaKali(s);


    return 0;
}