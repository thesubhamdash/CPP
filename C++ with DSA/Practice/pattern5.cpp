#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout << "Enter the value of n: ";
    cin >> n;
    char ch='A';

    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout << ch << " ";
        }
        ch += 1;
        cout << endl;
    }
    return 0;
}