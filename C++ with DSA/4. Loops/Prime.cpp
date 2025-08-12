#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout << "Enter a number: ";
    cin >> n;
    if (n==2){
            cout << n << " is prime\n";
        }
    else {
        for (i=2; i<=n-1; i++){
            if (n % i == 0){
                cout << "The entered number "<< n << " is not prime\n";
                break;
            }
        }
        if (i==n){
            cout << "The entered number "<< n << " is prime\n";  
        }
    }
    return 0;
}