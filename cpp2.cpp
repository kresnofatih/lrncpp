#include <iostream>
using namespace std;

int main(){
    float a, b, result;
    int op;
    cin >> a;
    cin >> b;
    cin >> op;
    switch(op){
        case 0:
            result = a+b;
            break;
        case 1:
            result = a-b;
            break;
        case 2:
            result = a*b;
            break;
        case 3:
            result = a/b;
            break;
    }
    cout << result << endl;
    return 0;
}