#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout << "Enter the value of n: ";
    cin >> n;

    for(i=0; i<n; i++){
        for(j=1; j<=i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}