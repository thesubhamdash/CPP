#include<iostream>
using namespace std;

int Revnum(int n){
    
    int a, rev=0;
    while (n>0) {
        a = n % 10;
        rev = rev *10 + a;
        n /= 10;
    }
    cout << "The reverse number is: " << rev;
}

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Revnum(n);
}