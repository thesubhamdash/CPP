#include<iostream>
using namespace std;

int main(){
    int n=7;
    int i,j;

    // For 1st Pyramid
    for(i=1; i<=n; i++){

        // For spaces
        for (j=1; j<=n-i; j++){
            cout << " ";
        }
        
        // For Stars
        for (j=1; j<=(2*i-1); j++){
            cout << "*";
        }
        cout << endl;
    }
    // For 2nd Pyramid
    for(i=n; i>=1; i--){

        // For spaces
        for (j=1; j<=n-i; j++){
            cout << " ";
        }
        
        // For Stars
        for (j=1; j<=(2*i-1); j++){
            cout << "*";
        }

        cout << endl;
    }
}