#include<iostream>
using namespace std;

int main(){
    int n=5;
    int i,j;

    for (i=1; i<=n; i++){

        //For space
        for (j=1; j<=n-i; j++){
            cout << " ";
        }

        //For backnumber
        for (j=i; j>=1; j--){
            cout << j;
        }

        //For frontnumber
        for(j=2; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
}