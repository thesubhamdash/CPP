#include<iostream>
using namespace std;

int main(){
    int n=7;
    int i,j;

    // 1st Pattern (Upper Half)
    for (i=1; i<=n; i++){

        // Stars
        for (j=1; j<=i; j++){
            cout << '*';
        }

        // Spaces
        for (j=1; j<=2*(n-i); j++){
            cout << ' ';
        }

        // Stars
        for (j=1; j<=i; j++){
            cout << '*';
        }
        cout << endl;
    }

    // 2nd Pattern (Lower Half)
    for (i=n; i>=1; i--){
        // Stars
        for (j=1; j<=i; j++){
            cout << '*';
        }

        // Spaces
        for (j=1; j<=2*(n-i); j++){
            cout << ' ';
        }

        // Stars
        for (j=1; j<=i; j++){
            cout << '*';
        }
        cout << endl;
    }
}