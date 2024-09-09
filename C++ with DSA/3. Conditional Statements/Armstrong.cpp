#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a 3 digit number: ";
    cin >> n;

    int sum=0,num,a,b,c;

    num = n;

    a = num % 10;
    num = num / 10;
    b = num % 10;
    num = num / 10;
    c = num % 10;

    sum = (a*a*a) + (b*b*b) + (c*c*c); 

    if (sum == n){
        cout << n << " is an armstrong number";
    }
    else{
        cout << n << " is not an armstrong number";
    }
    return 0;
}