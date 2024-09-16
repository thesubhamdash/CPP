#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int i,j;

    // for (i=n; i>=1; i--){
    //     for (j=i; j>=1; j--){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    for (i=1; i<=n; i++){
        for (j=1; j<=(n-i+1); j++){
            cout << "*";
        }
        cout << endl;
    }
}