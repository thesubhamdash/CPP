#include<iostream>
using namespace std;

int main(){
    int n=10;
    int i,j;

    for (i=1; i<=n; i++){
        for (j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}