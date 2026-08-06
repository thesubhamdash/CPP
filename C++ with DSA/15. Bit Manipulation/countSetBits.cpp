#include<iostream>
using namespace std;

void countSetBits(int num){
    int count = 0;
    while (num > 0){
        int last = num & 1;
        count += last;
        num = num >> 1;
    }
    cout << count;
}

int main(){
    countSetBits(15);
    return 0;
}