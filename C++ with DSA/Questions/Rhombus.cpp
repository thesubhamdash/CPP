#include<iostream>
using namespace std;

int main(){
    int n=5;

    for (int i=1; i<=n; i++){

        //For Spaces
        for (int j=1; j<=n-i; j++){
            cout << " ";
        }

        //For Stars
        for (int j=1; j<=n; j++){
            cout << "*";
        }
        cout << endl;
    }
}