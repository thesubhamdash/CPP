#include<iostream>
using namespace std;

int fact (int n) {
    int fact=1,i;

    for (i=1; i<=n; i++){
        fact = fact * i;
    }
    cout << "The factorial of " << n << " is " << fact << endl;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    fact(n);
    return 0;
}