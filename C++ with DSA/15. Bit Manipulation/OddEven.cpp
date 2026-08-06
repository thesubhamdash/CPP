#include<iostream>
using namespace std;

void oddorEven(int n){
    if(!(n & 1)){
        cout << "Even\n";
    } else{
        cout << "Odd\n";
    }
}

int main(){
    oddorEven(15);
    return 0;
}