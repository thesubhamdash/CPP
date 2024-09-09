#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;

    for (i=2; i<n; i++){
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime == true){
        cout << n << " is Prime" << endl;
    }
    else{
        cout << n << " is non-prime(Composite) number" << endl;
    }
    return 0;
}