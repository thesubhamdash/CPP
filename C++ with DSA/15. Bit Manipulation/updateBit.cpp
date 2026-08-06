#include<iostream>
using namespace std;

void updateBit(int num, int i, bool val){
    num = num & ~(1 << i);
    num = num | (val << i);
    cout << num << "\n";
}

int main(){
    updateBit(7,2,0);
    updateBit(7,3,1);
    return 0;
}