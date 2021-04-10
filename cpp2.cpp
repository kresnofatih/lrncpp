#include <iostream>
using namespace std;

float getResult(float a, float b, int op);

int main(){
    float a, b, result;
    int op;
    cin >> a;
    cin >> b;
    cin >> op;
    result = getResult(a,b,op);
    cout << result << endl;
    return 0;
}

float getResult(float a, float b, int op){
    float res;
    switch(op){
        case 0:
            res= (a+b);
            break;
        case 1:
            res= (a-b);
            break;
        case 2:
            res= (a*b);
            break;
        case 3:
            res= (a/b);
            break;
    };
    return res;
}