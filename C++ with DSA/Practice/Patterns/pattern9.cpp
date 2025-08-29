//INVERTED TRIANGLE PATTERN

#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout << "Enter the value of n: ";
    cin >> n;

    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            cout << " ";
        }
        for(j=n; j>i; j--){     // Also, (j=0; j<n-i; j++)
            cout << i+1;
        }
        cout << endl;
    }
    return 0;
}