#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=n; i>=1; i--){
        fact *= i;
    }
    return fact;
}

int main(){
    int n=5;
    cout << n << "!= " << factorial(n);
    return 0;
}