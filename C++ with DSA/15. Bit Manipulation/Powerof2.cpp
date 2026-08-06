#include<iostream>
using namespace std;

void powofTwo(int num){
    if(num>0 && (!(num & (num-1)))){
        cout << num << " is power of 2\n";
    } else{
        cout << num << " is not a power of 2\n";
    }
}

int main(){
    powofTwo(31);
    powofTwo(32);
    powofTwo(0);
    return 0;
}