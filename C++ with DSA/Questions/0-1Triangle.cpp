#include<iostream>
using namespace std;

int main(){
    int n=4;
    int i,j;
    bool val = true;


    for (i=1; i<=n; i++){
        for (j=i; j>=1; j--){
            cout << val << " ";
            val = !val;
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // If the sum of row index and column index is even, print 1, else 0
            if ((i + j) % 2 == 0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        // Move to the next line after each row
        cout << endl;
    }
}

