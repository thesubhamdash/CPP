#include<iostream>
using namespace std;

int main(){
    int i, n, sum=0;
    n = 10289;

    while (n>0)
    {
        int a = n % 10;
        if (a % 2 != 0){
            sum += a;
        }
        n /= 10; 
    }
    
    cout << sum << endl;
}