#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int i,j;

    for (i=n; i>=1; i--){
        for (j=i; j>=1; j--){
            cout << "*";
        }
        cout << endl;
    }
}