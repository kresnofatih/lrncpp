#include <iostream>
using namespace std;

int main(){
    int i, j, temp, b[5];
    for(i=0; i<5; i++){
        b[i]=i;// assign array values
    };
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(b[j]<b[j+1]){
                temp=b[j+1];
                b[j+1]=b[j];
                b[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
        cout<<b[i]<<endl;
    };
    return 0;
}