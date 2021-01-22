#include <iostream>
using namespace std;

bool checkOdd(int a, int b);
void printOddStatus(bool oddStatus);

int main(){
    int a, b;
    bool oddStatus;
    cin >> a;
    cin >> b;
    oddStatus = checkOdd(a, b);
    printOddStatus(oddStatus);
    return 0;
}

bool checkOdd(int a, int b){
    int c = a + b;
    if(c%2!=0){
        return true;
    } else {
        return false;
    }
}

void printOddStatus(bool oddStatus){
    if(oddStatus==true){
        cout << "Odd" << endl;
    } else {
        cout << "Even" << endl;
    }
}