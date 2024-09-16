#include<iostream>
using namespace std;

int main(){
    int n=5;
    int i,j;
    bool val = true;

    for (i=1; i<=n; i++){

        for(j=1; j<=i; j++){
            if (j % 2 != 0){
                cout << true;

            } else {
                cout << false;
            }
        }
        cout << endl;
    }


    for (i=0; i<n; i++){
        for (j=0; j<=i; j++){
            cout << val << " ";
            val = !val;
        }
        cout << endl;
    }
}