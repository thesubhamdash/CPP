#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,i;

    cout << "Enter a number: ";
    cin >> n;
    bool isPrime = true;

    for(i=2; i<=sqrt(n); i++){
        if (n%i == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime){
        cout << "The entered number is PRIME";
    } else {
        cout << "The entered number is NOT PRIME";
    }
}