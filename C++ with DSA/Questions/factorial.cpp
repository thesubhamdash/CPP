#include<iostream>
using namespace std;

int main(){
    int n,i,j,fact=1;
    cout << "Enter the value of n: ";
    cin >> n;
    for (i=1; i<=n; i++){
        fact = fact * i;
    }
    cout << n << "! = " << fact << endl;
    return 0;
}