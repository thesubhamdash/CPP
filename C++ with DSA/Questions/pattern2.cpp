#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout << "Enter the value of n: ";
    cin >> n;

    for(i=0; i<n; i++){
        char ch='A';
        for(j=0; j<n; j++){
            cout << ch << " ";  
            ch += 1;          
        }
        cout << endl;
    }
    return 0;
}