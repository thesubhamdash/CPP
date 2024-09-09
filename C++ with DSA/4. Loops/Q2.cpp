#include<iostream>
using namespace std;

int main(){
    int i,n,sum=0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (i=1; i<=n; i++){
        sum += i;
    }
    cout << sum << " is the sum of natural numbers from 1 to " << n;
    return 0;
}