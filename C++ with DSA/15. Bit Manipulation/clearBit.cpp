#include<iostream>
using namespace std;

void clearBit(int num, int i){
    int mask = ~(1 << i);
    cout << (num & mask);
}

int main(){
    clearBit(5,2);
    return 0;
}