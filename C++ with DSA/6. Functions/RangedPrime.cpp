#include<iostream>
using namespace std;

bool isPrime(int n){
    if (n==1){
        return false;
    }
    for (int i=2; i<=n-1; i++){
        if (n % i ==0){
            return false;
        } 
    }
    return true;
}

int allPrimes(int n){
    for (int i=2; i<=n; i++){
        if (isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}
int main(){
    allPrimes(50);
}
