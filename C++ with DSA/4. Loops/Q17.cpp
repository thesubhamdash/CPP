#include<iostream>
using namespace std;

int main(){
    int n,i;

    cout << "enter a number: ";
    cin >> n;

    bool isPrime = true;

    for (i=2; i<n; i++){
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime == true){
        cout << n << " is a Prime number";
    }
    else{
        cout << n << " is not a Prime number";
    }
    return 0;
}