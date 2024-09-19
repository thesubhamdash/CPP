#include<iostream>
using namespace std;

int Largest(int a, int b, int c){
    if (a>b && a>c){
        cout << a << " is largest";
    } else if(b>a && b>c){
        cout << b << " is largest";
    } else {
        cout << c << " is largest";
    }
}

int main(){
    Largest(5,10,100);
    return 0;
}