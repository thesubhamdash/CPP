#include<iostream>
using namespace std;

int main(){
    int a, n;
    n = 10289;

    while (n>0)
    {
        a = n % 10;
        cout << a;
        n /= 10; 
    }
    
}