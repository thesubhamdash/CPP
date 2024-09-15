#include<iostream>
using namespace std;

int main(){
    int n,i;
    int a = 0, b = 1, c;

    cout << "Enter a number to print fibonacci upto n: ";
    cin >> n;
    cout << a << endl;
    cout << b << endl;

    for (i=3; i<=n; i++){
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }
    return 0;
}