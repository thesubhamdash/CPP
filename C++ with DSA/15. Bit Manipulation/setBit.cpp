#include<iostream>
using namespace std;

void SetBit(int num, int i){
    int mask = 1 << i;
    cout << num << " -> " << (num | mask);
}

int main(){
    SetBit(5,1);
    return 0;
}