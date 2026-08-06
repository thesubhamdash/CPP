#include<iostream>
using namespace std;

void GetBit(int num, int i){
    int mask = 1 << i;
    if((num & mask) == 0){               //if(!(num & mask)){}
        cout << "ith bit = 0\n";
    } else{
        cout << "ith bit = 1\n";
    }
}

int main(){
    GetBit(5,2);
    GetBit(7,1);
    GetBit(15,3);
    GetBit(15,4);
    return 0;
}