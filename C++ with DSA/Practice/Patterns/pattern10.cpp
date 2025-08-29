#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout << "Enter the value of n: ";
    cin >> n;
    char ch='A';

    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            cout << " ";
        }
        for(j=n; j>i; j--){
            cout << ch;
        }
        ch += 1;
        cout << endl;
    }
    return 0;
}