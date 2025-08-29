//FLOYD'S TRIANGLE PATTERN

#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout << "Enter the value of n: ";
    cin >> n;
    int num = 1;

    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
    return 0;
}