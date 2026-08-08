#include<iostream>
using namespace std;

void clearBits(int num, int i, int j){
    int bitmask = (~0 << (j+1)) + ((1 << i) -1);
    num = num & bitmask;
    cout << num << endl;
}

int main(){
    clearBits(125,2,5);
    return 0;
}