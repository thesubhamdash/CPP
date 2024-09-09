#include<iostream>
using namespace std;

int main(){
    int a, n, rev=0;
    n = 10289;

    while (n>0)
    {
        a = n % 10;
        rev = rev * 10 + a;
        n /= 10; 
    }
    cout << rev;
}