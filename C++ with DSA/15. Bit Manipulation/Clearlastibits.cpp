#include<iostream>
using namespace std;

void clearLastiBits(int num, int i){
    num = num & (~0 << i);
    cout << num;
}

int main(){
    clearLastiBits(15,2);
    return 0;
}