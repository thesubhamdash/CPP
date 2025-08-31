#include<iostream>
using namespace std;

int main(){
    int i,n,rev=0,last;
    cout << "Enter a number: ";
    cin >> n;
    while (n>0){
        last = n % 10;
        rev = rev*10 + last;
        n /= 10;
    }
    cout << "Reversed number is: " << rev;
    return 0;
}