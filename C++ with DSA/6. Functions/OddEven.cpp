#include<iostream>
using namespace std;

int oddeven (int n){
    if (n % 2 == 0)
    {
        cout << n << " is even" << endl;
    } else {
        cout << n << " is odd" << endl;
    }
    
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    oddeven(n);
}