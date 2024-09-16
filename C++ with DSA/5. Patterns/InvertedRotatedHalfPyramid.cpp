#include<iostream>
using namespace std;

int main(){
    int n=4;
    int i,j;

    for (i=1; i<=n; i++){
        // For Spaces
        for(j=1; j<=n-i; j++){
            cout << " ";
        }

        // For Stars
        for(j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}