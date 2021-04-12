#include <iostream>

int pangkatIterasi(int a, int b){
    int hasil = a;
    for (int i = 1; i<b; i++){
        hasil *= a;
    }
    return hasil;
}

int pangkatRekursif(int a, int b){
    if(b==1){
        return a;
    } else {
        return a*pangkatRekursif(a, b-1);
    }
}

int main(){
    int a, b;
    a=2;
    b=4;
    std::cout << pangkatIterasi(a, b) << std::endl;
    std::cout << pangkatRekursif(a, b) << std::endl;
    
    return 0;
}