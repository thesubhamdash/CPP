#include<iostream>
using namespace std;

int main(){
    int n,a,b,c,sum=0,num;
    cout << "Enter a number: ";
    cin >> n;

    num = n;

    a = num % 10;
    num = num / 10;
    b = num % 10;
    num = num / 10;
    c = num % 10;

    sum = a*a*a + b*b*b + c*c*c;

    if (sum == n){
        cout << n << " is an Armstrong Number";
    }
    else{
        cout << n << " is not an Armstrong Number";
    }

    return 0;
}