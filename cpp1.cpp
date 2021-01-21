#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if (a<0){
        cout << "ice" << endl;
    } else if (a>=0 && a<100){
        cout << "water" << endl;
    } else {
        cout << "gas" << endl;
    }
    return 0;
}