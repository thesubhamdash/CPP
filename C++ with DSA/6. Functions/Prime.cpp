#include<iostream>
using namespace std;

bool isPrime (int n) {
    // bool isPrime = true;

    if ( n==1 ){
        return false;
    }
    for (int i=2; i<=n-1; i++){
        if (n % i == 0){
            return false;
        }
    }

    return true;

    // if (isPrime == true){
    //     cout << n << " is Prime";
    // } else {
    //     cout << n << " is Composite";
    // }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << isPrime(n) << endl;
    return 0;
}